#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 501761156
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long long p_7, short p_9,
                unsigned long p_15[3][4])
{
  float v_17;
  signed char v_13;
  unsigned long long v_11;
  unsigned long long v_5;
  char v;
  signed char result;
  v_17 = 382.525878906f;
  v_13 = (signed char)42;
  v_11 = 18446744073709549810ULL;
  result = (signed char)(~ ((unsigned long)((int)p_9 - (int)((signed char)v_17) / -59) * ! (- p_15[1][2])));
  v = (char)((unsigned long)v_13 * p_15[0][1]);
  v_5 = (unsigned long long)((int)result >> 7ULL);
  result = (signed char)(((unsigned long long)v * (((unsigned long long)p + v_5) * p_7)) * ! (- (
                         (unsigned long long)p_9 * v_11)));
  return result;
}


