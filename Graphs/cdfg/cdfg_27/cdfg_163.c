#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 374190201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[4][4], unsigned long long p_4, int p_6, int p_8,
          int p_10)
{
  unsigned long v_19;
  unsigned char v_17;
  long long v_15;
  long v_13;
  double v;
  short result;
  v_17 = (unsigned char)p[2][0];
  v_15 = -50269LL;
  v_13 = (long)p_6;
  v = 165.026520109;
  result = (short)p[0][3];
  while ((double)p_4 < (double)p_8 - ((double)(- result) - (v - (double)p_10))) {
    v_19 = v_15 >> (v_13 % 78L & 63L);
    v_13 = (long)(- (~ (p_10 - p_10)));
    v_15 = (long long)((unsigned long long)v_19 % (((unsigned long long)(! p[2][2]) - ~ p_4) + 152ULL));
    result = (short)((! p_4 >> (p_4 & 63ULL)) + (unsigned long long)(
                     -551491226L - (long)v_17 / -917556041L));
  }
  while_0_break: ;
  if ((double)((p_6 & ((int)result - 195)) + p_8) > (double)p_10 / ((
                                                                    v + (double)p_6) + 496.) + (double)(! (
                                                    107 + p_10))) result = (short)(! (! (
                                                                  37141UL % (
                                                                  p[0][1] + 930UL))));
  else {
    result = (short)-29823;
    result = (short)(4294913090U & (unsigned int)((int)(~ result) << (
                                                  ~ p_4 & 15ULL)));
  }
  return result;
}


