#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736591311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, long long p_9, short p_13, double p_15,
          long p_17[5][1][2])
{
  short v_11;
  unsigned short v_6;
  unsigned short v_4;
  unsigned char v;
  short result;
  v_6 = (unsigned short)3613;
  v_4 = (unsigned short)54592;
  result = (short)p;
  v_11 = (short)((long)(~ ((int)(- v_4) * ((int)v_4 % ((int)((unsigned short)p_15) + 199)))) | ~ (
                 (long)((int)p_13 / ((int)result + 566)) * (p_17[2][0][1] / (long)(
                                                            (int)p + 219))));
  v_4 = (unsigned short)((787205066L - (long)v_11) & (long)((int)(~ (! p)) * (int)p_13));
  v = (unsigned char)(- ((long long)((int)(~ result) / ((10117 | (int)v_4) + 634)) + (
                         (long long)(4294910655UL % (unsigned long)((int)v_6 + 861)) + 
                         (long long)p * p_9)));
  result = (short)(~ (~ (! (- v))));
  return result;
}


