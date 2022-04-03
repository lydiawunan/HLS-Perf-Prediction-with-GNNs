#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("p", 8, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("p_13", 64, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("p_15", 64, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("p_17_address0", 3, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("p_17_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("p_17_q0", 16, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("ap_return", 64, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "fn1";
