#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 501461932
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned int p_4, signed char p_9[2][2][1], long p_11[2])
{
  unsigned long v_7;
  long long v;
  int result;
  v_7 = 4294930273UL;
  v = -4199LL;
  result = (int)((- v % -51360LL) / (long long)(((long)(~ p_9[0][0][0]) ^ p_11[1]) + 638L));
  result = (int)((long long)p >> ((long long)((unsigned int)result + p_4) * (
                                  v % (long long)(v_7 + 20UL)) & 63LL));
  return result;
}


