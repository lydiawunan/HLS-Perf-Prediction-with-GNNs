#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 136872782
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[1], short p_7, double p_9, long p_13)
{
  unsigned long long v_11;
  signed char v_5;
  char v;
  unsigned int result;
  v_11 = (unsigned long long)p_9;
  v_5 = (signed char)-52;
  result = 1242U;
  v = (char)(((p[0] + (unsigned long)v_5) / (unsigned long)((unsigned int)p_7 % (
                                                            result + 909U) + 181U)) * (unsigned long)(
             (p_9 + p_9) * (double)(v_11 / (unsigned long long)(p_13 + 153L))));
  if (-60456LL > (long long)v) result = 89U; else result = 14U;
  return result;
}


