#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 674259638
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p[5], unsigned int p_13)
{
  unsigned char v_11;
  unsigned long long v_9;
  signed char v_7;
  unsigned int v_5;
  int v;
  long long result;
  v_7 = (signed char)p_13;
  v_5 = p[0];
  v_9 = (unsigned long long)(! p_13);
  v_11 = (unsigned char)((unsigned int)-476594007.04 - (- p_13 * ~ p[1] << 25));
  v = (int)((unsigned long long)(p[2] * v_5 | (unsigned int)(~ v_7)) % (
            ((v_9 - (unsigned long long)((int)v_11 % -82)) - (unsigned long long)(
             (long long)(! p[2]) % 318834137LL)) + 76ULL));
  result = (long long)v;
  return result;
}


