#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241396733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, long p_7, unsigned short p_19)
{
  long v_17;
  char v_15;
  double v_13;
  unsigned int v_11;
  unsigned char v_9;
  unsigned int v_4;
  long v;
  float result;
  v_17 = -630983667L;
  v_15 = (char)p_19;
  v_13 = (double)p_19;
  v_11 = (unsigned int)p;
  v_4 = 4294927705U;
  v = p_7;
  v = (long)((unsigned long long)(~ v_15) - (((unsigned long long)p_7 & 18446744073709521997ULL) ^ (unsigned long long)(
                                             ! v_4 >> ((v + (long)p) & 31L))));
  v_9 = (unsigned char)(((long long)((double)(42384UL * (unsigned long)v_11) * (
                                     v_13 + (double)v_11)) & 52916LL * (long long)v) & (long long)(
                        ((long)(17 | (int)v_15) % ((long)v_13 / (v_17 + 1005L) + 327L)) * (long)(- (! p_19))));
  v_4 = (unsigned int)v_9;
  result = (float)((((unsigned long)(-25665L + v) - (unsigned long)v_4) + (unsigned long)p) % (unsigned long)(
                   (63L - (long)((int)p / ((int)p + 549)) / (p_7 + 105L)) + 904L));
  return result;
}


