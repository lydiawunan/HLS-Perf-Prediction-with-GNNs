#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 332616081
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[1][4], int p_4, int p_7, unsigned int p_13)
{
  signed char v_15;
  int v_11;
  unsigned int v_9;
  unsigned long v;
  unsigned short result;
  v_15 = (signed char)p_4;
  v_11 = (int)((long long)p_13 * (-2837LL % (long long)(! (-26 + (int)v_15) + 624)));
  v_9 = (unsigned int)((long)v_11);
  v = (unsigned long)v_9;
  result = (unsigned short)(! p[0][2] % (long long)(p_4 + 170) | (long long)(
                            ((unsigned long)(-119 << 1) + v) | (unsigned long)(~ (
                            p_4 % (p_7 + 50)))));
  return result;
}


