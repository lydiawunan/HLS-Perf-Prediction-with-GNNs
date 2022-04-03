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
extern "C" short fn1(char, char, int*, short, long long*);
extern "C" short apatb_fn1_hw(char __xlx_apatb_param_p, char __xlx_apatb_param_p_7, volatile void * __xlx_apatb_param_p_9, short __xlx_apatb_param_p_15, volatile void * __xlx_apatb_param_p_19) {
  // Collect __xlx_p_9__tmp_vec
  vector<sc_bv<32> >__xlx_p_9__tmp_vec;
  for (int j = 0, e = 5; j != e; ++j) {
    __xlx_p_9__tmp_vec.push_back(((int*)__xlx_apatb_param_p_9)[j]);
  }
  int __xlx_size_param_p_9 = 5;
  int __xlx_offset_param_p_9 = 0;
  int __xlx_offset_byte_param_p_9 = 0*4;
  int* __xlx_p_9__input_buffer= new int[__xlx_p_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_9__tmp_vec.size(); ++i) {
    __xlx_p_9__input_buffer[i] = __xlx_p_9__tmp_vec[i].range(31, 0).to_uint64();
  }
  // Collect __xlx_p_19__tmp_vec
  vector<sc_bv<64> >__xlx_p_19__tmp_vec;
  for (int j = 0, e = 1; j != e; ++j) {
    __xlx_p_19__tmp_vec.push_back(((long long*)__xlx_apatb_param_p_19)[j]);
  }
  int __xlx_size_param_p_19 = 1;
  int __xlx_offset_param_p_19 = 0;
  int __xlx_offset_byte_param_p_19 = 0*8;
  long long* __xlx_p_19__input_buffer= new long long[__xlx_p_19__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_19__tmp_vec.size(); ++i) {
    __xlx_p_19__input_buffer[i] = __xlx_p_19__tmp_vec[i].range(63, 0).to_uint64();
  }
  // DUT call
  short ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_7, __xlx_p_9__input_buffer, __xlx_apatb_param_p_15, __xlx_p_19__input_buffer);
// print __xlx_apatb_param_p_9
  sc_bv<32>*__xlx_p_9_output_buffer = new sc_bv<32>[__xlx_size_param_p_9];
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    __xlx_p_9_output_buffer[i] = __xlx_p_9__input_buffer[i+__xlx_offset_param_p_9];
  }
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    ((int*)__xlx_apatb_param_p_9)[i] = __xlx_p_9_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_19
  sc_bv<64>*__xlx_p_19_output_buffer = new sc_bv<64>[__xlx_size_param_p_19];
  for (int i = 0; i < __xlx_size_param_p_19; ++i) {
    __xlx_p_19_output_buffer[i] = __xlx_p_19__input_buffer[i+__xlx_offset_param_p_19];
  }
  for (int i = 0; i < __xlx_size_param_p_19; ++i) {
    ((long long*)__xlx_apatb_param_p_19)[i] = __xlx_p_19_output_buffer[i].to_uint64();
  }
return ap_return;
}
