#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1061106290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, char p_4, unsigned long long p_6, unsigned int p_8,
          int p_10[2])
{
  unsigned long long v_15;
  unsigned long v_13;
  int v;
  short result;
  v_15 = (unsigned long long)p_8;
  v_13 = 993773838UL;
  v = -38878;
  v_15 = (v_15 % 917ULL) * (unsigned long long)p;
  if (((p_6 - (unsigned long long)(p_8 | (unsigned int)p_10[0])) | 18446744073709543376ULL) > 
      ((491929978ULL + p_6) + 14882ULL) % (((unsigned long long)((unsigned long)v - v_13) - 
                                            v_15 % (unsigned long long)(
                                            (int)p + 283)) + 964ULL)) 
    result = (short)p;
  else result = (short)((int)p_4 % 17);
  return result;
}


