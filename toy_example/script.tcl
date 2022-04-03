open_project project_tmp
set_top top_dfg
add_files top_dfg.c
open_solution "solution_tmp"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./directive.tcl"
csynth_design
export_design -evaluate verilog -format ip_catalog
exit
