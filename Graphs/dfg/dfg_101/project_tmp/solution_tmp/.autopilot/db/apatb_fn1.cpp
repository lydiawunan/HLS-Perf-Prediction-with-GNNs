#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

// wrapc file define:
#define AUTOTB_TVIN_p "../tv/cdatafile/c.fn1.autotvin_p.dat"
#define AUTOTB_TVOUT_p "../tv/cdatafile/c.fn1.autotvout_p.dat"
// wrapc file define:
#define AUTOTB_TVIN_p_5 "../tv/cdatafile/c.fn1.autotvin_p_5.dat"
#define AUTOTB_TVOUT_p_5 "../tv/cdatafile/c.fn1.autotvout_p_5.dat"
// wrapc file define:
#define AUTOTB_TVIN_p_7 "../tv/cdatafile/c.fn1.autotvin_p_7.dat"
#define AUTOTB_TVOUT_p_7 "../tv/cdatafile/c.fn1.autotvout_p_7.dat"
// wrapc file define:
#define AUTOTB_TVIN_p_9 "../tv/cdatafile/c.fn1.autotvin_p_9.dat"
#define AUTOTB_TVOUT_p_9 "../tv/cdatafile/c.fn1.autotvout_p_9.dat"
// wrapc file define:
#define AUTOTB_TVIN_p_11 "../tv/cdatafile/c.fn1.autotvin_p_11.dat"
#define AUTOTB_TVOUT_p_11 "../tv/cdatafile/c.fn1.autotvout_p_11.dat"
// wrapc file define:
#define AUTOTB_TVOUT_return "../tv/cdatafile/c.fn1.autotvout_ap_return.dat"

#define INTER_TCL "../tv/cdatafile/ref.tcl"

// tvout file define:
#define AUTOTB_TVOUT_PC_p "../tv/rtldatafile/rtl.fn1.autotvout_p.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_p_5 "../tv/rtldatafile/rtl.fn1.autotvout_p_5.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_p_7 "../tv/rtldatafile/rtl.fn1.autotvout_p_7.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_p_9 "../tv/rtldatafile/rtl.fn1.autotvout_p_9.dat"
// tvout file define:
#define AUTOTB_TVOUT_PC_p_11 "../tv/rtldatafile/rtl.fn1.autotvout_p_11.dat"
#define AUTOTB_TVOUT_PC_return "../tv/rtldatafile/rtl.fn1.autotvout_ap_return.dat"

class INTER_TCL_FILE {
  public:
INTER_TCL_FILE(const char* name) {
  mName = name; 
  p_depth = 0;
  p_5_depth = 0;
  p_7_depth = 0;
  p_9_depth = 0;
  p_11_depth = 0;
  return_depth = 0;
  trans_num =0;
}
~INTER_TCL_FILE() {
  mFile.open(mName);
  if (!mFile.good()) {
    cout << "Failed to open file ref.tcl" << endl;
    exit (1); 
  }
  string total_list = get_depth_list();
  mFile << "set depth_list {\n";
  mFile << total_list;
  mFile << "}\n";
  mFile << "set trans_num "<<trans_num<<endl;
  mFile.close();
}
string get_depth_list () {
  stringstream total_list;
  total_list << "{p " << p_depth << "}\n";
  total_list << "{p_5 " << p_5_depth << "}\n";
  total_list << "{p_7 " << p_7_depth << "}\n";
  total_list << "{p_9 " << p_9_depth << "}\n";
  total_list << "{p_11 " << p_11_depth << "}\n";
  total_list << "{ap_return " << return_depth << "}\n";
  return total_list.str();
}
void set_num (int num , int* class_num) {
  (*class_num) = (*class_num) > num ? (*class_num) : num;
}
void set_string(std::string list, std::string* class_list) {
  (*class_list) = list;
}
  public:
    int p_depth;
    int p_5_depth;
    int p_7_depth;
    int p_9_depth;
    int p_11_depth;
    int return_depth;
    int trans_num;
  private:
    ofstream mFile;
    const char* mName;
};

static void RTLOutputCheckAndReplacement(std::string &AESL_token, std::string PortName) {
  bool no_x = false;
  bool err = false;

  no_x = false;
  // search and replace 'X' with '0' from the 3rd char of token
  while (!no_x) {
    size_t x_found = AESL_token.find('X', 0);
    if (x_found != string::npos) {
      if (!err) { 
        cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port" 
             << PortName << ", possible cause: There are uninitialized variables in the C design."
             << endl; 
        err = true;
      }
      AESL_token.replace(x_found, 1, "0");
    } else
      no_x = true;
  }
  no_x = false;
  // search and replace 'x' with '0' from the 3rd char of token
  while (!no_x) {
    size_t x_found = AESL_token.find('x', 2);
    if (x_found != string::npos) {
      if (!err) { 
        cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'x' on port" 
             << PortName << ", possible cause: There are uninitialized variables in the C design."
             << endl; 
        err = true;
      }
      AESL_token.replace(x_found, 1, "0");
    } else
      no_x = true;
  }
}
extern "C" short fn1_hw_stub_wrapper(long long, short, volatile void *, volatile void *, double);

extern "C" short apatb_fn1_hw(long long __xlx_apatb_param_p, short __xlx_apatb_param_p_5, volatile void * __xlx_apatb_param_p_7, volatile void * __xlx_apatb_param_p_9, double __xlx_apatb_param_p_11) {
  refine_signal_handler();
  fstream wrapc_switch_file_token;
  wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
  int AESL_i;
  if (wrapc_switch_file_token.good())
  {

    CodeState = ENTER_WRAPC_PC;
    static unsigned AESL_transaction_pc = 0;
    string AESL_token;
    string AESL_num;
    short AESL_return;
    {
      static ifstream rtl_tv_out_file;
      if (!rtl_tv_out_file.is_open()) {
        rtl_tv_out_file.open(AUTOTB_TVOUT_PC_return);
        if (rtl_tv_out_file.good()) {
          rtl_tv_out_file >> AESL_token;
          if (AESL_token != "[[[runtime]]]")
            exit(1);
        }
      }
  
      if (rtl_tv_out_file.good()) {
        rtl_tv_out_file >> AESL_token; 
        rtl_tv_out_file >> AESL_num;  // transaction number
        if (AESL_token != "[[transaction]]") {
          cerr << "Unexpected token: " << AESL_token << endl;
          exit(1);
        }
        if (atoi(AESL_num.c_str()) == AESL_transaction_pc) {
          std::vector<sc_bv<16> > return_pc_buffer(1);
          int i = 0;

          rtl_tv_out_file >> AESL_token; //data
          while (AESL_token != "[[/transaction]]"){

            RTLOutputCheckAndReplacement(AESL_token, "return");
  
            // push token into output port buffer
            if (AESL_token != "") {
              return_pc_buffer[i] = AESL_token.c_str();;
              i++;
            }
  
            rtl_tv_out_file >> AESL_token; //data or [[/transaction]]
            if (AESL_token == "[[[/runtime]]]" || rtl_tv_out_file.eof())
              exit(1);
          }
          if (i > 0) {
            ((short*)&AESL_return)[0] = return_pc_buffer[0].to_int64();
          }
        } // end transaction
      } // end file is good
    } // end post check logic bolck
  
    AESL_transaction_pc++;
    return  AESL_return;
  }
static unsigned AESL_transaction;
static AESL_FILE_HANDLER aesl_fh;
static INTER_TCL_FILE tcl_file(INTER_TCL);
std::vector<char> __xlx_sprintf_buffer(1024);
CodeState = ENTER_WRAPC;
//p
aesl_fh.touch(AUTOTB_TVIN_p);
aesl_fh.touch(AUTOTB_TVOUT_p);
//p_5
aesl_fh.touch(AUTOTB_TVIN_p_5);
aesl_fh.touch(AUTOTB_TVOUT_p_5);
//p_7
aesl_fh.touch(AUTOTB_TVIN_p_7);
aesl_fh.touch(AUTOTB_TVOUT_p_7);
//p_9
aesl_fh.touch(AUTOTB_TVIN_p_9);
aesl_fh.touch(AUTOTB_TVOUT_p_9);
//p_11
aesl_fh.touch(AUTOTB_TVIN_p_11);
aesl_fh.touch(AUTOTB_TVOUT_p_11);
CodeState = DUMP_INPUTS;
// print p Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_p, __xlx_sprintf_buffer.data());
  {
    sc_bv<64> __xlx_tmp_lv = *((long long*)&__xlx_apatb_param_p);

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVIN_p, __xlx_sprintf_buffer.data()); 
  }
  tcl_file.set_num(1, &tcl_file.p_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_p, __xlx_sprintf_buffer.data());
}
// print p_5 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_p_5, __xlx_sprintf_buffer.data());
  {
    sc_bv<16> __xlx_tmp_lv = *((short*)&__xlx_apatb_param_p_5);

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVIN_p_5, __xlx_sprintf_buffer.data()); 
  }
  tcl_file.set_num(1, &tcl_file.p_5_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_p_5, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_p_7 = 0;
// print p_7 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_p_7, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_p_7 = 0*1;
  if (__xlx_apatb_param_p_7) {
    for (int j = 0  - 0, e = 1 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_p_7)[j];

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVIN_p_7, __xlx_sprintf_buffer.data()); 
      }
  }
}
  tcl_file.set_num(1, &tcl_file.p_7_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_p_7, __xlx_sprintf_buffer.data());
}
unsigned __xlx_offset_byte_param_p_9 = 0;
// print p_9 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_p_9, __xlx_sprintf_buffer.data());
  {  __xlx_offset_byte_param_p_9 = 0*1;
  if (__xlx_apatb_param_p_9) {
    for (int j = 0  - 0, e = 1 - 0; j != e; ++j) {
sc_bv<8> __xlx_tmp_lv = ((char*)__xlx_apatb_param_p_9)[j];

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVIN_p_9, __xlx_sprintf_buffer.data()); 
      }
  }
}
  tcl_file.set_num(1, &tcl_file.p_9_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_p_9, __xlx_sprintf_buffer.data());
}
// print p_11 Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVIN_p_11, __xlx_sprintf_buffer.data());
  {
    sc_bv<64> __xlx_tmp_lv = *((long long*)&__xlx_apatb_param_p_11);

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVIN_p_11, __xlx_sprintf_buffer.data()); 
  }
  tcl_file.set_num(1, &tcl_file.p_11_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVIN_p_11, __xlx_sprintf_buffer.data());
}
CodeState = CALL_C_DUT;
short ap_return = fn1_hw_stub_wrapper(__xlx_apatb_param_p, __xlx_apatb_param_p_5, __xlx_apatb_param_p_7, __xlx_apatb_param_p_9, __xlx_apatb_param_p_11);
CodeState = DUMP_OUTPUTS;
// print return Transactions
{
  sprintf(__xlx_sprintf_buffer.data(), "[[transaction]] %d\n", AESL_transaction);
  aesl_fh.write(AUTOTB_TVOUT_return, __xlx_sprintf_buffer.data());
  sc_bv<16> __xlx_tmp_lv = ((short*)&ap_return)[0];

    sprintf(__xlx_sprintf_buffer.data(), "%s\n", __xlx_tmp_lv.to_string(SC_HEX).c_str());
    aesl_fh.write(AUTOTB_TVOUT_return, __xlx_sprintf_buffer.data()); 
  
  tcl_file.set_num(1, &tcl_file.return_depth);
  sprintf(__xlx_sprintf_buffer.data(), "[[/transaction]] \n");
  aesl_fh.write(AUTOTB_TVOUT_return, __xlx_sprintf_buffer.data());
}
CodeState = DELETE_CHAR_BUFFERS;
AESL_transaction++;
tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
return ap_return;
}
