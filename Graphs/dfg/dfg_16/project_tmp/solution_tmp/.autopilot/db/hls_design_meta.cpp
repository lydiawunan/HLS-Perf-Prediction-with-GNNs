#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("p_address0", 2, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("p_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("p_q0", 8, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("p_7", 32, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("p_9", 64, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("p_13", 32, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("ap_return", 64, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "fn1";
