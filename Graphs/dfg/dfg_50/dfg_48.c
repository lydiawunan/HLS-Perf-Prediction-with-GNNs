#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231567473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, short p_4, float p_6[4][3][2],
                       long long p_9, int p_11)
{
  unsigned long v_15;
  char v_13;
  long long v;
  unsigned long long result;
  v_15 = 4294954754UL;
  v = (long long)(! v_15);
  v_13 = (char)((long long)p_4 / (p_9 + 957LL) >> (p / ((p_9 / (p_9 + 517LL) - (
                                                         v - p_9)) + 498LL) & 63LL));
  v = ~ ((long long)(- v_13) * (62LL / (p_9 + 79LL))) % (long long)(~ (~ (
                                                                    (int)p_4 - 89)) + 689);
  result = (unsigned long long)(- (p ^ (long long)((int)p_4 / ((int)((short)p_6[3][1][0]) + 667))) % (
                                ((~ v + (p_9 + (long long)p_11)) << 2U) + 372LL));
  return result;
}


