#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 759682258
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, char p_5, signed char p_7, long long p_9,
                 unsigned long long p_13)
{
  long v_17;
  char v_15;
  unsigned int v_11;
  unsigned int v;
  unsigned int result;
  v_17 = (long)p_7;
  v_15 = (char)-23;
  v_11 = 4294913134U;
  v = (unsigned int)p_7;
  result = 3328579368U;
  while ((unsigned long long)((p - result) / (v_11 + 796U)) % (p_13 + 812ULL) < (unsigned long long)(
         (long long)((v_11 - 29615U) ^ p / 41333U) / ((long long)(1009 + (int)v_15) / (
                                                      p_9 * (long long)v_15 + 384LL) + 836LL))) {
    v = v_17 + 46L;
    v_17 = (long)(! ((unsigned long)p - 47488UL) / (unsigned long)(p + 873U));
    v_11 = (unsigned int)p_13;
    result = (unsigned int)(~ (! (- p_9)));
  }
  while_0_break: ;
  result = (v ^ result * 3414971537U) + (p / 790147105U) * (p ^ 44593U);
  return result;
}


