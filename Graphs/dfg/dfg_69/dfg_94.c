#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 826295958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[1][5][5], unsigned short p_4, long p_9,
        float p_13, double p_15[5])
{
  long v_17;
  unsigned long v_11;
  unsigned long long v_7;
  long long v;
  int result;
  v_17 = -61588657L;
  v = (long long)p_13;
  result = (int)(((16673LL * (v * (long long)p_15[1])) % (long long)(
                  ! v_17 + 567L)) / (long long)(p_9 + 591L));
  v_11 = (unsigned long)((unsigned long long)p_13 % 7524ULL);
  v_7 = (unsigned long long)(((unsigned long)p_9 + v_11) * ((unsigned long)(~ result) - (
                                                            4294930808UL + (unsigned long)p_4)) - (unsigned long)result);
  result = (int)(((51933ULL - (p[0][4][3] ^ (unsigned long long)p_4)) + (unsigned long long)(! (~ v))) - v_7);
  return result;
}


