#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 28121113
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, signed char p_5[2], float p_7, long long p_13,
          unsigned long long p_19)
{
  short v_17;
  unsigned long v_15;
  signed char v_11;
  unsigned long long v_9;
  signed char v;
  short result;
  v_15 = 4294904572UL;
  v_11 = (signed char)p;
  v = (signed char)p_7;
  result = (short)-400;
  v_17 = (short)(18446744073154130196ULL / ((p_19 + p_19) + 661ULL) & 35473ULL);
  if (18LL <= ((long long)(! p_5[0]) - p_13 % -33523LL) >> ((int)v_17 & 63)) {
    result = (short)((int)(! p_5[0]) / ((int)(~ v) + 505));
    v = (signed char)-107;
    result = (short)(57306 % (((int)((double)result / (p + 982.)) - (int)v / 8548) + 690));
  }
  else {
    v_17 = (short)((unsigned int)v_17 + 1);
    v_9 = (unsigned long long)(((long long)result / (-20036LL * p_13 + 187LL)) % (
                               ((long long)(! v_15) - (p_13 & (long long)v_17)) + 101LL));
    result = (short)((int)((signed char)((p_7 * -10185.f) / (((float)v_9 + -802.549194336f) + 166.f))) / (
                     (int)v_11 + 574));
  }
  return result;
}


