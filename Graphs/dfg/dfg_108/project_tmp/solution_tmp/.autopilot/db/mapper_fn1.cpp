#include <systemc>
#include <vector>
#include <iostream>
#include "hls_stream.h"
#include "ap_int.h"
#include "ap_fixed.h"
using namespace std;
using namespace sc_dt;
class AESL_RUNTIME_BC {
  public:
    AESL_RUNTIME_BC(const char* name) {
      file_token.open( name);
      if (!file_token.good()) {
        cout << "Failed to open tv file " << name << endl;
        exit (1);
      }
      file_token >> mName;//[[[runtime]]]
    }
    ~AESL_RUNTIME_BC() {
      file_token.close();
    }
    int read_size () {
      int size = 0;
      file_token >> mName;//[[transaction]]
      file_token >> mName;//transaction number
      file_token >> mName;//pop_size
      size = atoi(mName.c_str());
      file_token >> mName;//[[/transaction]]
      return size;
    }
  public:
    fstream file_token;
    string mName;
};
extern "C" long long fn1(short, double, char*, char, long long*);
extern "C" long long apatb_fn1_hw(short __xlx_apatb_param_p, double __xlx_apatb_param_p_7, volatile void * __xlx_apatb_param_p_9, char __xlx_apatb_param_p_11, volatile void * __xlx_apatb_param_p_15) {
  // Collect __xlx_p_9__tmp_vec
  vector<sc_bv<8> >__xlx_p_9__tmp_vec;
  for (int j = 0, e = 6; j != e; ++j) {
    __xlx_p_9__tmp_vec.push_back(((char*)__xlx_apatb_param_p_9)[j]);
  }
  int __xlx_size_param_p_9 = 6;
  int __xlx_offset_param_p_9 = 0;
  int __xlx_offset_byte_param_p_9 = 0*1;
  char* __xlx_p_9__input_buffer= new char[__xlx_p_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_9__tmp_vec.size(); ++i) {
    __xlx_p_9__input_buffer[i] = __xlx_p_9__tmp_vec[i].range(7, 0).to_uint64();
  }
  // Collect __xlx_p_15__tmp_vec
  vector<sc_bv<64> >__xlx_p_15__tmp_vec;
  for (int j = 0, e = 12; j != e; ++j) {
    __xlx_p_15__tmp_vec.push_back(((long long*)__xlx_apatb_param_p_15)[j]);
  }
  int __xlx_size_param_p_15 = 12;
  int __xlx_offset_param_p_15 = 0;
  int __xlx_offset_byte_param_p_15 = 0*8;
  long long* __xlx_p_15__input_buffer= new long long[__xlx_p_15__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_15__tmp_vec.size(); ++i) {
    __xlx_p_15__input_buffer[i] = __xlx_p_15__tmp_vec[i].range(63, 0).to_uint64();
  }
  // DUT call
  long long ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_7, __xlx_p_9__input_buffer, __xlx_apatb_param_p_11, __xlx_p_15__input_buffer);
// print __xlx_apatb_param_p_9
  sc_bv<8>*__xlx_p_9_output_buffer = new sc_bv<8>[__xlx_size_param_p_9];
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    __xlx_p_9_output_buffer[i] = __xlx_p_9__input_buffer[i+__xlx_offset_param_p_9];
  }
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    ((char*)__xlx_apatb_param_p_9)[i] = __xlx_p_9_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_15
  sc_bv<64>*__xlx_p_15_output_buffer = new sc_bv<64>[__xlx_size_param_p_15];
  for (int i = 0; i < __xlx_size_param_p_15; ++i) {
    __xlx_p_15_output_buffer[i] = __xlx_p_15__input_buffer[i+__xlx_offset_param_p_15];
  }
  for (int i = 0; i < __xlx_size_param_p_15; ++i) {
    ((long long*)__xlx_apatb_param_p_15)[i] = __xlx_p_15_output_buffer[i].to_uint64();
  }
return ap_return;
}
