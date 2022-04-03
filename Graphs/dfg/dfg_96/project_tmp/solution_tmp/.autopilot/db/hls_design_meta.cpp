#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("p", 16, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("p_4", 16, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("p_6", 64, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("p_9", 8, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("p_11_address0", 4, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("p_11_ce0", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("p_11_q0", 32, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("p_11_address1", 4, hls_out, 4, "ap_memory", "MemPortADDR2", 1),
	Port_Property("p_11_ce1", 1, hls_out, 4, "ap_memory", "MemPortCE2", 1),
	Port_Property("p_11_q1", 32, hls_in, 4, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("ap_return", 8, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "fn1";
