#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566517287
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, unsigned short p_4, char p_6, unsigned short p_9[2][3][1],
         long long p_11)
{
  long long v_15;
  float v_13;
  char v;
  long result;
  v_15 = 970118513LL;
  v_13 = 993.052062988f;
  v = (char)(((unsigned long long)(- (60933LL ^ v_15)) ^ 18446744072792443062ULL) / 55497ULL);
  result = (long)(v_13 - - ((float)p_6 - -2.0592237608e+38f) / ((float)(
                                                                ((long long)v & p_11) & p_11) + 432.f));
  result = (long)(! ((58411ULL + (unsigned long long)p_6) % (unsigned long long)(
                     ((int)v - (int)p_9[0][0][0]) + 870) - (unsigned long long)(
                     (p_11 / -57485LL) / (long long)((result ^ 116L) + 412L))));
  result = p * (((long)(! p_4) + result * result) - -1252609152L);
  return result;
}


