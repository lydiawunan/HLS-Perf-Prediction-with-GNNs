#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993604013
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned short p_5[1], short p_7,
              float p_11, signed char p_15)
{
  char v_23;
  unsigned int v_21;
  float v_19;
  unsigned short v_17;
  double v_13;
  float v_9;
  long v;
  long long result;
  v_23 = (char)-7;
  v_19 = p_11;
  v_17 = (unsigned short)851;
  v_13 = -7.64587877202e+37;
  v_9 = (float)p_7;
  result = 510197223LL;
  v_21 = (unsigned int)p_11;
  if (24187LL / ((long long)v_13 + 989LL) < (long long)((int)(p_11 / (
                                                              (float)p_7 + 138.f) - (float)(- v_21)) * (
                                                        ((int)p_5[0] - (int)v_23) % (
                                                        (int)p_11 + 82)))) {
    v = (long)(~ ((int)(! p_5[0]) - (int)(~ p_7)));
    result = (long long)(~ (! (v - 12L)));
    result = (long long)(! (! ((unsigned long long)result / (p + 894ULL))));
  }
  else {
    v_13 = (double)((float)((long)((int)p_15 + (int)p_5[0]) % (1040595342L % (
                                                               (long)v_9 + 965L) + 558L)) - (
                    (float)((long long)v_17 * result) + v_19));
    result = (long long)(! (3 + (int)v_13));
    result = (long long)((float)result * ((3556624640.f - v_9) * (float)(
                                          (unsigned long)p_11 & 29789UL)));
  }
  return result;
}


