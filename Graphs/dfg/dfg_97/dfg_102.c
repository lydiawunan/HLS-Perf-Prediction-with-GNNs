#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 642020881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, short p_5, unsigned char p_7, int p_13, int p_15)
{
  int v_11;
  unsigned char v_9;
  signed char v;
  long long result;
  v_11 = (int)p_5;
  v_9 = (unsigned char)p_15;
  v = (signed char)(! (unsigned short)7118);
  v_11 = ! (~ (v_11 / ((int)v + 867)) ^ (int)(- v_9) * (p_15 * (int)p_5));
  result = (long long)(((((int)p_5 - (int)p_7) + (int)v_9 / 23804) + (
                        (34272 + v_11) - (int)v * p_13)) * p_13);
  result = - (result ^ (long long)v) / (long long)((int)(~ (~ p)) + 46) ^ (long long)(
           43 << 4);
  return result;
}


