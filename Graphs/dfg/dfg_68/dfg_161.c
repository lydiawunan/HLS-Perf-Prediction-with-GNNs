#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 789918835
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p[4][4][4], long long p_5, long p_7, short p_11,
         signed char p_13)
{
  long v_9;
  long long v;
  long result;
  v_9 = (long)((int)p_13 % ((int)p[1][2][2] + 532));
  result = (long)(p_5 - (long long)p_11);
  v = (long long)((612094221UL * (unsigned long)(! (p_7 % 248L))) * (unsigned long)(
                  ~ (! v_9) ^ 0L));
  result = (long)((unsigned long long)((long long)p[0][0][3] - v) * ~ (
                  (18446744073219567584ULL + (unsigned long long)p_5) * (unsigned long long)(
                  v % (long long)(result + 1007L))));
  return result;
}


