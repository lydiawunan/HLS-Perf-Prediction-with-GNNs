set moduleName fn1
set isTopModule 1
set isCombinational 1
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {fn1}
set C_modelType { int 64 }
set C_modelArgList {
	{ p int 64 unused {array 45 { } 0 1 }  }
	{ p_11 int 32 unused  }
	{ p_13 int 64 unused  }
	{ p_17 int 64 unused  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "p","cData": "long","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "p_11", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "p_11","cData": "int","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "p_13", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "p_13","cData": "long","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "p_17", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "p_17","cData": "long","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64,"bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "return","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_address0 sc_out sc_lv 6 signal 0 } 
	{ p_ce0 sc_out sc_logic 1 signal 0 } 
	{ p_we0 sc_out sc_logic 1 signal 0 } 
	{ p_d0 sc_out sc_lv 64 signal 0 } 
	{ p_q0 sc_in sc_lv 64 signal 0 } 
	{ p_address1 sc_out sc_lv 6 signal 0 } 
	{ p_ce1 sc_out sc_logic 1 signal 0 } 
	{ p_we1 sc_out sc_logic 1 signal 0 } 
	{ p_d1 sc_out sc_lv 64 signal 0 } 
	{ p_q1 sc_in sc_lv 64 signal 0 } 
	{ p_11 sc_in sc_lv 32 signal 1 } 
	{ p_13 sc_in sc_lv 64 signal 2 } 
	{ p_17 sc_in sc_lv 64 signal 3 } 
	{ ap_return sc_out sc_lv 64 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "p", "role": "address0" }} , 
 	{ "name": "p_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p", "role": "ce0" }} , 
 	{ "name": "p_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p", "role": "we0" }} , 
 	{ "name": "p_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p", "role": "d0" }} , 
 	{ "name": "p_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p", "role": "q0" }} , 
 	{ "name": "p_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "p", "role": "address1" }} , 
 	{ "name": "p_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p", "role": "ce1" }} , 
 	{ "name": "p_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p", "role": "we1" }} , 
 	{ "name": "p_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p", "role": "d1" }} , 
 	{ "name": "p_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p", "role": "q1" }} , 
 	{ "name": "p_11", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_11", "role": "default" }} , 
 	{ "name": "p_13", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p_13", "role": "default" }} , 
 	{ "name": "p_17", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p_17", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "fn1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "p_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_17", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	fn1 {
		p {Type X LastRead -1 FirstWrite -1}
		p_11 {Type I LastRead -1 FirstWrite -1}
		p_13 {Type I LastRead -1 FirstWrite -1}
		p_17 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p { ap_memory {  { p_address0 mem_address 1 6 }  { p_ce0 mem_ce 1 1 }  { p_we0 mem_we 1 1 }  { p_d0 mem_din 1 64 }  { p_q0 mem_dout 0 64 }  { p_address1 MemPortADDR2 1 6 }  { p_ce1 MemPortCE2 1 1 }  { p_we1 MemPortWE2 1 1 }  { p_d1 MemPortDIN2 1 64 }  { p_q1 MemPortDOUT2 0 64 } } }
	p_11 { ap_none {  { p_11 in_data 0 32 } } }
	p_13 { ap_none {  { p_13 in_data 0 64 } } }
	p_17 { ap_none {  { p_17 in_data 0 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
