#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922246327
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned short p_4, long p_11)
{
  unsigned long v_9;
  char v_7;
  int v;
  short result;
  v_9 = 55390UL;
  v_7 = (char)p;
  v = (int)v_9;
  result = (short)((! ((unsigned long long)v % 18446744072778281106ULL) - (unsigned long long)(
                    (unsigned long)(p_11 * p_11) % (unsigned long)(503457879U % (unsigned int)(
                                                                   (int)v_7 + 653) + 602U))) << (
                   - (~ (v_9 + 17752UL)) & 63UL));
  v_7 = (char)(2705UL + - v_9);
  result = (short)(- ((double)((unsigned int)(- result) / (! p + 856U)) * (
                      (double)((int)p_4 * v) * ((double)v_7 + 2036878839.23))));
  return result;
}


