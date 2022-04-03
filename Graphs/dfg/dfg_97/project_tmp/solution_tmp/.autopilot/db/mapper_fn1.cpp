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
extern "C" float fn1(int, long long, short*, char*, int*);
extern "C" float apatb_fn1_hw(int __xlx_apatb_param_p, long long __xlx_apatb_param_p_4, volatile void * __xlx_apatb_param_p_6, volatile void * __xlx_apatb_param_p_8, volatile void * __xlx_apatb_param_p_10) {
  // Collect __xlx_p_6__tmp_vec
  vector<sc_bv<16> >__xlx_p_6__tmp_vec;
  for (int j = 0, e = 5; j != e; ++j) {
    __xlx_p_6__tmp_vec.push_back(((short*)__xlx_apatb_param_p_6)[j]);
  }
  int __xlx_size_param_p_6 = 5;
  int __xlx_offset_param_p_6 = 0;
  int __xlx_offset_byte_param_p_6 = 0*2;
  short* __xlx_p_6__input_buffer= new short[__xlx_p_6__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_6__tmp_vec.size(); ++i) {
    __xlx_p_6__input_buffer[i] = __xlx_p_6__tmp_vec[i].range(15, 0).to_uint64();
  }
  // Collect __xlx_p_8__tmp_vec
  vector<sc_bv<8> >__xlx_p_8__tmp_vec;
  for (int j = 0, e = 20; j != e; ++j) {
    __xlx_p_8__tmp_vec.push_back(((char*)__xlx_apatb_param_p_8)[j]);
  }
  int __xlx_size_param_p_8 = 20;
  int __xlx_offset_param_p_8 = 0;
  int __xlx_offset_byte_param_p_8 = 0*1;
  char* __xlx_p_8__input_buffer= new char[__xlx_p_8__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_8__tmp_vec.size(); ++i) {
    __xlx_p_8__input_buffer[i] = __xlx_p_8__tmp_vec[i].range(7, 0).to_uint64();
  }
  // Collect __xlx_p_10__tmp_vec
  vector<sc_bv<32> >__xlx_p_10__tmp_vec;
  for (int j = 0, e = 2; j != e; ++j) {
    __xlx_p_10__tmp_vec.push_back(((int*)__xlx_apatb_param_p_10)[j]);
  }
  int __xlx_size_param_p_10 = 2;
  int __xlx_offset_param_p_10 = 0;
  int __xlx_offset_byte_param_p_10 = 0*4;
  int* __xlx_p_10__input_buffer= new int[__xlx_p_10__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_10__tmp_vec.size(); ++i) {
    __xlx_p_10__input_buffer[i] = __xlx_p_10__tmp_vec[i].range(31, 0).to_uint64();
  }
  // DUT call
  float ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_4, __xlx_p_6__input_buffer, __xlx_p_8__input_buffer, __xlx_p_10__input_buffer);
// print __xlx_apatb_param_p_6
  sc_bv<16>*__xlx_p_6_output_buffer = new sc_bv<16>[__xlx_size_param_p_6];
  for (int i = 0; i < __xlx_size_param_p_6; ++i) {
    __xlx_p_6_output_buffer[i] = __xlx_p_6__input_buffer[i+__xlx_offset_param_p_6];
  }
  for (int i = 0; i < __xlx_size_param_p_6; ++i) {
    ((short*)__xlx_apatb_param_p_6)[i] = __xlx_p_6_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_8
  sc_bv<8>*__xlx_p_8_output_buffer = new sc_bv<8>[__xlx_size_param_p_8];
  for (int i = 0; i < __xlx_size_param_p_8; ++i) {
    __xlx_p_8_output_buffer[i] = __xlx_p_8__input_buffer[i+__xlx_offset_param_p_8];
  }
  for (int i = 0; i < __xlx_size_param_p_8; ++i) {
    ((char*)__xlx_apatb_param_p_8)[i] = __xlx_p_8_output_buffer[i].to_uint64();
  }
// print __xlx_apatb_param_p_10
  sc_bv<32>*__xlx_p_10_output_buffer = new sc_bv<32>[__xlx_size_param_p_10];
  for (int i = 0; i < __xlx_size_param_p_10; ++i) {
    __xlx_p_10_output_buffer[i] = __xlx_p_10__input_buffer[i+__xlx_offset_param_p_10];
  }
  for (int i = 0; i < __xlx_size_param_p_10; ++i) {
    ((int*)__xlx_apatb_param_p_10)[i] = __xlx_p_10_output_buffer[i].to_uint64();
  }
return ap_return;
}
