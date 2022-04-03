
open_project project_tmp
set_top fn1
add_files ./dfg_199.c
open_solution "solution_tmp"
set_part {xc7z020clg484-1}
#set_part {xc7vx690tffg1761-2}
create_clock -period 10 -name default
#source "./directive.tcl"
csynth_design
export_design -evaluate verilog -format ip_catalog
exit
    