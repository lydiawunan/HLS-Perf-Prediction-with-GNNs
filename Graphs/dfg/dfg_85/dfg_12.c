#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231268959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, long long p_4, unsigned short p_7[1][3],
                 unsigned long long p_9[5][4], unsigned long p_13)
{
  unsigned long long v_17;
  int v_15;
  unsigned int v_11;
  char v;
  unsigned int result;
  v_17 = 18446744073534697985ULL;
  v = (char)-78;
  v_11 = (unsigned int)((unsigned long long)(- ((int)v / -35273 + (int)(- v))) + ! (
                        (unsigned long long)(! p_13) - v_17 * (unsigned long long)p_4));
  v_15 = (int)(! p_7[0][1]);
  v = (char)(4162533049UL + ((unsigned long)v_15 - p_13));
  result = (unsigned int)((unsigned long long)((long long)p / ((p_4 - 51LL) + 633LL) + (long long)v) % (
                          ((unsigned long long)p_7[0][1] | (p_9[2][0] * (unsigned long long)v_11 | (
                                                            (unsigned long long)p_13 & 6641ULL))) + 804ULL));
  return result;
}


