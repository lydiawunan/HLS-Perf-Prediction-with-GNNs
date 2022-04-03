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
extern "C" char fn1(short, short, long long, char, int*);
extern "C" char apatb_fn1_hw(short __xlx_apatb_param_p, short __xlx_apatb_param_p_4, long long __xlx_apatb_param_p_6, char __xlx_apatb_param_p_9, volatile void * __xlx_apatb_param_p_11) {
  // Collect __xlx_p_11__tmp_vec
  vector<sc_bv<32> >__xlx_p_11__tmp_vec;
  for (int j = 0, e = 15; j != e; ++j) {
    __xlx_p_11__tmp_vec.push_back(((int*)__xlx_apatb_param_p_11)[j]);
  }
  int __xlx_size_param_p_11 = 15;
  int __xlx_offset_param_p_11 = 0;
  int __xlx_offset_byte_param_p_11 = 0*4;
  int* __xlx_p_11__input_buffer= new int[__xlx_p_11__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_11__tmp_vec.size(); ++i) {
    __xlx_p_11__input_buffer[i] = __xlx_p_11__tmp_vec[i].range(31, 0).to_uint64();
  }
  // DUT call
  char ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_4, __xlx_apatb_param_p_6, __xlx_apatb_param_p_9, __xlx_p_11__input_buffer);
// print __xlx_apatb_param_p_11
  sc_bv<32>*__xlx_p_11_output_buffer = new sc_bv<32>[__xlx_size_param_p_11];
  for (int i = 0; i < __xlx_size_param_p_11; ++i) {
    __xlx_p_11_output_buffer[i] = __xlx_p_11__input_buffer[i+__xlx_offset_param_p_11];
  }
  for (int i = 0; i < __xlx_size_param_p_11; ++i) {
    ((int*)__xlx_apatb_param_p_11)[i] = __xlx_p_11_output_buffer[i].to_uint64();
  }
return ap_return;
}
