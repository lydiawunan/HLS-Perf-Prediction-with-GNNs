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
extern "C" short fn1(int, long long*, short*, char*, long long);
extern "C" short apatb_fn1_hw(int __xlx_apatb_param_p, volatile void * __xlx_apatb_param_p_7, volatile void * __xlx_apatb_param_p_9, volatile void * __xlx_apatb_param_p_11, long long __xlx_apatb_param_p_13) {
  // Collect __xlx_p_7__tmp_vec
  vector<sc_bv<64> >__xlx_p_7__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    __xlx_p_7__tmp_vec.push_back(((long long*)__xlx_apatb_param_p_7)[j]);
  }
  int __xlx_size_param_p_7 = 20;
  int __xlx_offset_param_p_7 = 0;
  int __xlx_offset_byte_param_p_7 = 0*8;
  long long* __xlx_p_7__input_buffer= new long long[__xlx_p_7__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_7__tmp_vec.size(); ++i) {
    __xlx_p_7__input_buffer[i] = __xlx_p_7__tmp_vec[i].range(63, 0).to_uint64();
  }
  // Collect __xlx_p_9__tmp_vec
  vector<sc_bv<16> >__xlx_p_9__tmp_vec;
  for (int j = 0, e = 3; j != e; ++j) {
    __xlx_p_9__tmp_vec.push_back(((short*)__xlx_apatb_param_p_9)[j]);
  }
  int __xlx_size_param_p_9 = 3;
  int __xlx_offset_param_p_9 = 0;
  int __xlx_offset_byte_param_p_9 = 0*2;
  short* __xlx_p_9__input_buffer= new short[__xlx_p_9__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_9__tmp_vec.size(); ++i) {
    __xlx_p_9__input_buffer[i] = __xlx_p_9__tmp_vec[i].range(15, 0).to_uint64();
  }
  // Collect __xlx_p_11__tmp_vec
  vector<sc_bv<8> >__xlx_p_11__tmp_vec;
  for (int j = 0, e = 8; j != e; ++j) {
    __xlx_p_11__tmp_vec.push_back(((char*)__xlx_apatb_param_p_11)[j]);
  }
  int __xlx_size_param_p_11 = 8;
  int __xlx_offset_param_p_11 = 0;
  int __xlx_offset_byte_param_p_11 = 0*1;
  char* __xlx_p_11__input_buffer= new char[__xlx_p_11__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_11__tmp_vec.size(); ++i) {
    __xlx_p_11__input_buffer[i] = __xlx_p_11__tmp_vec[i].range(7, 0).to_uint64();
  }
  // DUT call
  short ap_return = fn1(__xlx_apatb_param_p, __xlx_p_7__input_buffer, __xlx_p_9__input_buffer, __xlx_p_11__input_buffer, __xlx_apatb_param_p_13);
// print __xlx_apatb_param_p_7
  sc_bv<64>*__xlx_p_7_output_buffer = new sc_bv<64>[__xlx_size_param_p_7];
  for (int i = 0; i < __xlx_size_param_p_7; ++i) {
    __xlx_p_7_output_buffer[i] = __xlx_p_7__input_buffer[i+__xlx_offset_param_p_7];
  }
  for (int i = 0; i < __xlx_size_param_p_7; ++i) {
    ((long long*)__xlx_apatb_param_p_7)[i] = __xlx_p_7_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_9
  sc_bv<16>*__xlx_p_9_output_buffer = new sc_bv<16>[__xlx_size_param_p_9];
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    __xlx_p_9_output_buffer[i] = __xlx_p_9__input_buffer[i+__xlx_offset_param_p_9];
  }
  for (int i = 0; i < __xlx_size_param_p_9; ++i) {
    ((short*)__xlx_apatb_param_p_9)[i] = __xlx_p_9_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_11
  sc_bv<8>*__xlx_p_11_output_buffer = new sc_bv<8>[__xlx_size_param_p_11];
  for (int i = 0; i < __xlx_size_param_p_11; ++i) {
    __xlx_p_11_output_buffer[i] = __xlx_p_11__input_buffer[i+__xlx_offset_param_p_11];
  }
  for (int i = 0; i < __xlx_size_param_p_11; ++i) {
    ((char*)__xlx_apatb_param_p_11)[i] = __xlx_p_11_output_buffer[i].to_uint64();
  }
return ap_return;
}
