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
extern "C" long long fn1(long long, int, long long, short*);
extern "C" long long apatb_fn1_hw(long long __xlx_apatb_param_p, int __xlx_apatb_param_p_4, long long __xlx_apatb_param_p_9, volatile void * __xlx_apatb_param_p_15) {
  // Collect __xlx_p_15__tmp_vec
  vector<sc_bv<16> >__xlx_p_15__tmp_vec;
  for (int j = 0, e = 15; j != e; ++j) {
    __xlx_p_15__tmp_vec.push_back(((short*)__xlx_apatb_param_p_15)[j]);
  }
  int __xlx_size_param_p_15 = 15;
  int __xlx_offset_param_p_15 = 0;
  int __xlx_offset_byte_param_p_15 = 0*2;
  short* __xlx_p_15__input_buffer= new short[__xlx_p_15__tmp_vec.size()];
  for (int i = 0; i < __xlx_p_15__tmp_vec.size(); ++i) {
    __xlx_p_15__input_buffer[i] = __xlx_p_15__tmp_vec[i].range(15, 0).to_uint64();
  }
  // DUT call
  long long ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_4, __xlx_apatb_param_p_9, __xlx_p_15__input_buffer);
// print __xlx_apatb_param_p_15
  sc_bv<16>*__xlx_p_15_output_buffer = new sc_bv<16>[__xlx_size_param_p_15];
  for (int i = 0; i < __xlx_size_param_p_15; ++i) {
    __xlx_p_15_output_buffer[i] = __xlx_p_15__input_buffer[i+__xlx_offset_param_p_15];
  }
  for (int i = 0; i < __xlx_size_param_p_15; ++i) {
    ((short*)__xlx_apatb_param_p_15)[i] = __xlx_p_15_output_buffer[i].to_uint64();
  }
return ap_return;
}
