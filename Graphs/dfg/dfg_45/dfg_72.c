#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576346077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, short p_7, unsigned short p_9[2][3],
         signed char p_13, long long p_15)
{
  long long v_17;
  unsigned int v_11;
  long v_5;
  long v;
  long result;
  v_17 = (long long)p_9[0][0];
  v_5 = -6302L;
  v = (long)((0LL - - (v_17 | 30LL)) * (long long)(~ (551737056L / (long)(
                                                      ((int)p_9[1][1] | 203) + 594))));
  v_11 = (unsigned int)p_15;
  result = (long)((unsigned long)(~ (v * (long)(~ p))) - (unsigned long)(
                                                         ~ v_5 % (long)(
                                                         (int)(! p_7) + 643)) / (unsigned long)(
                                                         ((unsigned int)p_9[1][1] % (
                                                          v_11 + 757U) - (unsigned int)(
                                                          (int)p_7 / (
                                                          (int)p_13 + 174))) + 818U));
  result = ! result;
  return result;
}


