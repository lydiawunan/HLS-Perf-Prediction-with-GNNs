#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572852028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, double p_4, double p_6[1][3], double p_8,
        unsigned long p_13)
{
  unsigned long v_11;
  unsigned short v;
  int result;
  v = (unsigned short)61261;
  v_11 = ~ (p_13 & 549683759UL) + 25696UL;
  if (p_8 <= (double)(((unsigned long)v - v_11) / (p_13 + 225UL))) result = (int)p;
  else {
    result = (int)(- ((double)p * (p_4 / (p_6[0][0] + 290.))));
    result = (int)(! (61222LL % ((long long)result % (p + 231LL) + 601LL)));
  }
  return result;
}


