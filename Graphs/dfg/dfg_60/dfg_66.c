#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 610875150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, int p_5, long p_7, unsigned char p_11,
          int p_13)
{
  unsigned long v_9;
  unsigned short v;
  short result;
  v_9 = ~ (1 / (unsigned long)(~ p_13 + 485));
  v = (unsigned short)(~ ((long long)(- (63634UL % (v_9 + 8UL))) % (47157LL * (long long)(~ p_11) + 383LL)));
  result = (short)(! ((- p + (unsigned long long)2.83363900907e+37) % (unsigned long long)(
                      (long)p_5 / (p_7 * -10941L + 744L) + 475L)));
  result = (short)((unsigned long long)(- ((int)(! result) % 121)) + ~ (~ (
                   p / (unsigned long long)((int)v + 155))));
  return result;
}


