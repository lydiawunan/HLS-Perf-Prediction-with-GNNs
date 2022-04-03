#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("p_address0", 3, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("p_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("p_we0", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("p_d0", 32, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("p_q0", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("p_address1", 3, hls_out, 0, "ap_memory", "MemPortADDR2", 1),
	Port_Property("p_ce1", 1, hls_out, 0, "ap_memory", "MemPortCE2", 1),
	Port_Property("p_we1", 1, hls_out, 0, "ap_memory", "MemPortWE2", 1),
	Port_Property("p_d1", 32, hls_out, 0, "ap_memory", "MemPortDIN2", 1),
	Port_Property("p_q1", 32, hls_in, 0, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("p_9", 64, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("ap_return", 64, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "fn1";
