#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648702212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[4], unsigned long long p_9[2],
                       unsigned long p_13, float p_15, unsigned char p_19)
{
  short v_21;
  unsigned long long v_17;
  unsigned long v_11;
  long long v_7;
  short v_4;
  unsigned long v;
  unsigned long long result;
  v_21 = (short)22091;
  v_7 = -22723LL;
  v_4 = (short)p_9[0];
  v = 3805665179UL;
  result = (unsigned long long)p[1];
  if (- (~ (p_9[1] % (unsigned long long)((int)v_4 + 197))) == 18446744073709551546ULL) {
    v = ((unsigned long)(4294903899U % (unsigned int)((int)v_21 + 438)) * 38328UL) / (
        (unsigned long)-1.21916803537e+38f + 475UL);
    result = ~ p_9[0];
    v_21 = (short)(~ ((unsigned long)p_19 + p_13) - ! (p_13 | 4245181505UL));
  }
  else {
    v_21 = (short)(v - (unsigned long)(- (37 % ((int)p[2] + 182))));
    v_7 = ~ (! 25490LL);
    v_4 = (short)(! (- v_7 / 150LL));
  }
  if ((unsigned long long)v_21 > 1) {
    v_4 = (short)((unsigned long long)(- ((long long)v_4 - v_7)) / (! (
                                                                    p_9[1] / (unsigned long long)(
                                                                    v + 485UL)) + 531ULL));
    v = (unsigned long)(! (-28728LL * (long long)((int)v_4 - (int)p[2])));
    result = (unsigned long long)v;
  }
  else {
    v_17 = 18446744073709516535ULL;
    v_11 = (unsigned long)((unsigned long long)(-29202 >> ((int)((short)p_15) & 15)) / (
                           v_17 + 699ULL) + (unsigned long long)p_19);
    result = (unsigned long long)v_11 | ((unsigned long long)(-540906895 >> (
                                                              p_13 & 31UL)) - result);
  }
  return result;
}


