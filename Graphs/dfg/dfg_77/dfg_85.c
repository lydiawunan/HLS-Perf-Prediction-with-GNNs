#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 871765319
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, double p_4, unsigned long long p_6, float p_8,
        signed char p_11[5][5])
{
  unsigned char v_13;
  long long v;
  int result;
  v = (long long)(- p_8);
  v_13 = (unsigned char)(- (! (- (- p_11[0][0]))));
  result = (int)((! v % (long long)((int)p_11[0][3] + 580) ^ (long long)v_13) / (
                 ~ ((long long)(60337. + p_4) + 63623LL) + 662LL));
  result = ! ((result % ((int)p + 283)) / -17) * (int)(((p_4 - (double)p_6) / 823681386.) / (double)(
                                                       p_8 / 828.f + 192.f));
  return result;
}


