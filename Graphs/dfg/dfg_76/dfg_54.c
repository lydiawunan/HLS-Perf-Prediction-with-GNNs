#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 76672757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned int p_7, unsigned long p_9, float p_11,
        long long p_13)
{
  long long v_17;
  signed char v_15;
  long long v_4;
  long v;
  int result;
  v_17 = 39286LL;
  v_15 = (signed char)120;
  v_4 = (long long)p_9;
  v = (long)(18446744073709516676ULL ^ (unsigned long long)(- v_4 * v_17));
  v = (long)(((float)(! p_9) / (p_11 + 78.f)) / ((float)(p_13 % (long long)(
                                                         ((unsigned long)(- v) - (unsigned long)(
                                                          56677143U / (unsigned int)(
                                                          (int)v_15 + 949))) + 396UL)) + 617.f));
  v_4 = (long long)(~ (~ (75U & p) << (p_7 & 31U)));
  result = (int)(~ (-28550LL / ((long long)(~ v) / (v_4 + 977LL) + 349LL)));
  return result;
}


