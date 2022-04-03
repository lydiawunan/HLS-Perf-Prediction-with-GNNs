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
extern "C" long long fn1(long long, long long, long long, int, short);
extern "C" long long apatb_fn1_hw(long long __xlx_apatb_param_p, long long __xlx_apatb_param_p_4, long long __xlx_apatb_param_p_6, int __xlx_apatb_param_p_9, short __xlx_apatb_param_p_11) {
  // DUT call
  long long ap_return = fn1(__xlx_apatb_param_p, __xlx_apatb_param_p_4, __xlx_apatb_param_p_6, __xlx_apatb_param_p_9, __xlx_apatb_param_p_11);
return ap_return;
}
