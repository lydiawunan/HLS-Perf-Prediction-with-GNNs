# ==============================================================
# Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2020.2 (64-bit)
# Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
# ==============================================================
source ./settings.tcl
source -notrace ./extraction.tcl

set targetPart ${device}${package}${speed}
set vivadoProjectName project
set vivadoProjectDir .
set hlsProjectName project_tmp
set hlsSolutionName solution_tmp
set outputDir ./report 
set top_inst_name $top_module
set error_if_impl_timing_fails false
set target_clk_period_ns "10.000"
file mkdir $outputDir

create_project $vivadoProjectName $vivadoProjectDir -part $targetPart -force
set_property target_language $language [current_project]


# setup design sources and constraints
set bd_design_name bd_0
set bd_inst_name hls_inst
set clock_freq_hz [expr {floor(1000 / $target_clk_period_ns) * 1000000}]
set ip_vlnv xilinx.com:hls:top_dfg:1.0
set ip_repo_path {../ip}
set assign_slr ""
set bd_cell_properties {}
set_param ips.enableSLRParameter 2

if { ![file exists $ip_repo_path] } {
    error "Cannot find packaged HLS IP"
}
set_property ip_repo_paths [file normalize $ip_repo_path] [current_project]
update_ip_catalog
create_bd_design $bd_design_name

# Instantiate HLS IP
set cell_inst [create_bd_cell -type ip -vlnv $ip_vlnv $bd_inst_name]
if { $assign_slr ne "" } {
  set_property CONFIG.SLR_ASSIGNMENTS $assign_slr $cell_inst
}
if { [llength $bd_cell_properties] } { 
    set_property -dict $bd_cell_properties $cell_inst 
}

# Update BD pins
make_bd_pins_external $cell_inst
make_bd_intf_pins_external $cell_inst

# Set BD clock port freq property
set bd_clk_ports [get_bd_ports -filter {TYPE==clk}]
if { [llength $bd_clk_ports] && $clock_freq_hz ne "" } { set_property CONFIG.FREQ_HZ $clock_freq_hz $bd_clk_ports }

# Remove "_0" suffix from BD ports & interfaces so they match IP ports (XDC names will match)
foreach bd_port [get_bd_intf_ports] {
  set_property name [regsub {_0$} [get_property name $bd_port] {}] $bd_port
}
foreach bd_port [get_bd_ports -filter {INTF!=TRUE}] {
  set_property name [regsub {_0$} [get_property name $bd_port] {}] $bd_port
}

# Vitis kernels have minimum width for s_axi target address space 
# This changes external port address space, not IP
set s_axi_addr_width_min 32
foreach bd_port [get_bd_intf_ports -filter {MODE == "Slave" && VLNV =~ "xilinx.com:interface:aximm_rtl:*"}] {
  set bd_port_addr_width [get_property CONFIG.ADDR_WIDTH $bd_port]
  if { $bd_port_addr_width < $s_axi_addr_width_min } {
    puts "INFO: Updating $bd_port CONFIG.ADDR_WIDTH to $s_axi_addr_width_min"
    set_property CONFIG.ADDR_WIDTH $s_axi_addr_width_min $bd_port
  }
}

# Downgrade slave segment critical warnings since this is an OOC design
set_msg_config -id {[BD 41-1265]} -severity {CRITICAL WARNING} -new_severity {INFO}

# Use default address assignment
assign_bd_address

# Set top of design to use BD wrapper
set toprtl [make_wrapper -files [get_files ${bd_design_name}.bd] -top]
add_files -norecurse $toprtl
set top_inst_name [file root [file tail $toprtl]]
puts "Using BD top: $top_inst_name"

# Add XDC files
set xdc_files [glob -nocomplain ./*.xdc]
if { [llength $xdc_files] } {
    add_files -fileset constrs_1 -norecurse $xdc_files
}

# Create the ooc run objects without running them
launch_runs synth_1 -scripts_only

# Rest all the synthesis runs
foreach run [get_runs -filter {IS_SYNTHESIS == 1}] {
  reset_run [get_runs $run]
}


set_property XPM_LIBRARIES {XPM_MEMORY XPM_FIFO} [current_project]

# synth properties setting
set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]
set ip_inst [get_ips -quiet ${bd_design_name}*${bd_inst_name}*]
if { ![llength $ip_inst] } {
    error "Cannot find HLS IP instance: ${bd_design_name}*${bd_inst_name}*"
}
set synth_run [get_runs -filter {IS_SYNTHESIS == 1} ${ip_inst}*]
if { ![llength $synth_run] } {
    error "Cannot find synth run for HLS IP: ${ip_inst}*"
}

set synth_args [list -directive sdx_optimization_effort_high]
if { [llength $synth_args] } {
    set_property -name {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value $synth_args -objects $synth_run
}

# launch run synth
launch_runs synth_1
wait_on_run synth_1
open_run synth_1
# write a few files and reports after synthesis
run_report report_utilization -file $outputDir/${top_module}_utilization_synth.rpt
run_report report_timing_summary -file $outputDir/${top_module}_timing_synth.rpt
# launch run impl
launch_runs impl_1
wait_on_run impl_1
open_run impl_1
# write a few files and reports after route
run_report report_route_status -file $outputDir/${top_module}_status_routed.rpt
run_report report_timing -max_paths 10 -file $outputDir/${top_module}_timing_paths_routed.rpt
run_report report_utilization -file $outputDir/${top_module}_utilization_routed.rpt
run_report report_timing_summary -file $outputDir/${top_module}_timing_routed.rpt
check_impl_run impl_1 $error_if_impl_timing_fails
if { [catch { compile_reports_vivado 1 $target_clk_period_ns $outputDir $top_module ../report/$language $targetPart $hlsProjectName $hlsSolutionName $clock } err] } {
    puts "ERROR \[IMPL-251\] Errors occured while compiling report: $err"
    exit 1
}
