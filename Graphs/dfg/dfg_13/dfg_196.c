#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 314722480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long long p_4, long p_6, float p_9,
                   float p_13)
{
  short v_15;
  double v_11;
  char v;
  unsigned short result;
  v_15 = (short)p_6;
  v_11 = (double)((long long)((p_13 - p_9) + (float)((long long)v_15 / (
                                                     p_4 + 492LL))) + 38239LL);
  v = (char)v_11;
  result = (unsigned short)p_9;
  result = (unsigned short)(((long long)((unsigned int)result + ! p) + (
                             (p_4 - 46529LL) + (long long)(p_6 * (long)2.20028407002e+38))) * (long long)(! v));
  return result;
}


