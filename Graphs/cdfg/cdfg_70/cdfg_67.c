#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1031242879
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, long p_5, unsigned long long p_9,
                       unsigned int p_11[5][1], unsigned long long p_15)
{
  int v_13;
  unsigned int v_7;
  signed char v;
  unsigned long long result;
  v_13 = 2783;
  if (1271387188ULL != ((unsigned long long)(! (42 - v_13)) & (p_15 + p_15) * (unsigned long long)(
                                                              529027491UL - (unsigned long)p))) {
    v = (signed char)p_5;
    result = (unsigned long long)v;
  }
  else {
    v = (signed char)-98;
    v_7 = (unsigned int)(- (- p_9) + (unsigned long long)(-45764LL * (long long)(
                                                          (long)v * p_5)));
    result = (unsigned long long)v_7;
  }
  result = ((result / 39961ULL) / (unsigned long long)(p + 232)) * ((
                                                                    result * 25742ULL) % 4294919566ULL);
  return result;
}


