#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 560819543
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, long long p_7, signed char p_9, int p_11)
{
  float v_15;
  unsigned char v_13;
  double v_4;
  unsigned char v;
  unsigned long result;
  v_15 = -955.946350098f;
  v_13 = (unsigned char)v_15;
  v = v_13;
  v_4 = (double)((! (p_7 >> 21) * 170LL) * (long long)((int)(~ p_9) << (
                                                       ~ p_11 & 7)));
  result = (unsigned long)(! ((unsigned int)(((int)v - (int)((unsigned char)v_4)) + 153) % (
                              p + 516U)));
  return result;
}


