#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1050421812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, double p_4, unsigned char p_6[2][1][2], float p_8,
          short p_11[3])
{
  long v_17;
  char v_15;
  float v_13;
  short v;
  short result;
  v_17 = -46943L;
  v_15 = (char)p;
  v = (short)p;
  if ((unsigned long)(10 - ~ ((int)v_15 - (int)p_6[1][0][1])) < (unsigned long)(~ (
                                                                v_17 + (long)v)) * (
                                                                - p - (unsigned long)p_11[1])) {
    v = (short)-18042;
    result = (short)p;
  }
  else {
    v_13 = (float)(- (p * 18260UL) - 41332UL * (p * (unsigned long)p_11[1]));
    result = (short)((17006. + p_4 / ((double)p_11[0] + 518.)) * ((765.185302734 - p_4) * (
                                                                  p_4 * (double)v_13)));
    v = (short)-29879;
  }
  if (~ (418096914ULL * (unsigned long long)p_8) + (unsigned long long)(! p) != (unsigned long long)(
      ((int)result % -84) * (int)v << ((((int)p_11[0] ^ (int)p_11[0]) + (
                                        (int)result - 39)) & 31))) {
    result = (short)(18446744073709498689ULL * (unsigned long long)result);
    result = ! result;
    result = (short)(! (p + (unsigned long)(~ result)));
  }
  else result = (short)21133;
  return result;
}


