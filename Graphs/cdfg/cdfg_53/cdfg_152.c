#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887197282
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned long p_4, unsigned long p_11,
                 int p_13, float p_15)
{
  unsigned short v_21;
  unsigned short v_19;
  short v_17;
  unsigned long long v_9;
  unsigned char v_7;
  long long v;
  unsigned int result;
  v_19 = (unsigned short)p_4;
  v_17 = (short)30124;
  v_7 = (unsigned char)p_11;
  result = (unsigned int)p_13;
  if ((unsigned long long)(0 - ~ ((int)((unsigned char)p_15) + (int)v_7)) > 18446744073709551615ULL) {
    v_9 = (unsigned long long)(- (- (- result)));
    v = (long long)(0ULL % (~ (- v_9) + 406ULL));
    v_9 = (unsigned long long)v_17;
  }
  else {
    v_21 = (unsigned short)p_4;
    v_9 = (unsigned long long)(((p_4 & (unsigned long)p_13) + 4294954011UL) + (unsigned long)(
                               ~ result - (unsigned int)(p_13 % ((int)v_21 + 631))));
    v = (long long)v_19;
  }
  if (-3086236LL >= (long long)((unsigned long)(p_13 * (int)p_15) % (
                                (unsigned long)v_7 % (p_11 + 189UL) + 812UL)) / (
                    ~ v + 78LL)) result = (unsigned int)(! (~ p * (long long)(
                                                            p_4 + 23955UL)));
  else {
    result = (unsigned int)(- ((p + (long long)p_11) * (long long)(~ p_13)));
    v = (long long)(~ result);
    result = (unsigned int)((unsigned long long)((v ^ 30581LL) / ((long long)v_7 / (
                                                                  p + 51LL) + 414LL)) % (
                            v_9 + 486ULL));
  }
  return result;
}


