#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 199768421
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p[2][5][3], unsigned short p_7, long long p_11,
          unsigned int p_13, long p_15)
{
  double v_19;
  long long v_17;
  unsigned short v_9;
  short v_5;
  unsigned long long v;
  short result;
  v_19 = (double)p_7;
  v_17 = (long long)p[0][4][1];
  v_9 = (unsigned short)42884;
  v_5 = (short)1425;
  v = (unsigned long long)(p_11 + (- v_17 << ((int)v_5 & 63)) / ((long long)v_19 + 616LL));
  v_5 = (short)((((unsigned long long)v_9 % (18446744073709535937ULL / (
                                             v + 576ULL) + 960ULL)) * (
                 (unsigned long long)(p_11 >> (p_13 & 63U)) % (! v + 817ULL))) * (unsigned long long)(
                -11L - ! p_15 * (long)(-95 / ((int)v_9 + 811))));
  v = (unsigned long long)p_7;
  result = (short)(- v << (((((int)((char)-1.57447090048e+38) + (int)p[1][2][2]) + 
                             112 % ((int)v_5 + 337)) & -14) & 63));
  return result;
}


