#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169962681
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned char p_7, long long p_13)
{
  unsigned long long v_11;
  char v_9;
  long v_5;
  signed char v;
  signed char result;
  v_5 = (long)p_7;
  v_9 = (char)(- (- (~ (- p_13))));
  v_11 = (unsigned long long)(9834LL % ((0 % -20430LL - 49549LL) + 176LL));
  v = (signed char)(~ ((unsigned long long)((long)(79 / ((int)p_7 + 369)) * (
                                            v_5 / (long)((int)p_7 + 949))) - 
                       (unsigned long long)(! v_9) / (v_11 + 363ULL)));
  result = (signed char)(((unsigned long)v / (p + 573UL) + 49678UL) | (
                         0UL ^ ((unsigned long)(v_5 ^ (long)p_7) + ((unsigned long)-2.57730120297e+38f + p))));
  return result;
}


