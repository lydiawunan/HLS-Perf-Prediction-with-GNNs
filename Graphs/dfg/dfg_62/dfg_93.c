#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 518059413
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned long long p_11)
{
  double v_9;
  unsigned int v_7;
  char v_4;
  unsigned long long v;
  signed char result;
  v_7 = 3613237334U;
  v_9 = (double)(~ p_11 << ((18446744073610031460ULL + ((unsigned long long)p - 
                                                        p_11 * p_11)) & 63ULL));
  v_4 = (char)(718281553 | (int)((double)((unsigned long long)(p << 12) % (
                                          (unsigned long long)v_7 % 1014120314ULL + 541ULL)) * v_9));
  v = (unsigned long long)v_4;
  result = (signed char)(v * 574803161ULL);
  return result;
}


