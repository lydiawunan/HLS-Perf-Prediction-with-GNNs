#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003307204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned char p_4, long p_6[5][5][2],
        float p_8, unsigned long p_10)
{
  float v_13;
  short v;
  int result;
  v_13 = -2.68120028005e+38f;
  result = 502529233;
  v = (short)(v_13 * 59441.f);
  if (p_6[3][3][1] == (long)(~ (result | (int)(! v)))) {
    result = (int)(732801060UL / (- (- p_10) + 563UL));
    result = ~ (817216686 << (result & 31));
    result = (int)((p * p ^ (unsigned long long)(result ^ (int)p_4)) * (unsigned long long)(
                   (unsigned long)(p_6[1][4][1] / ((long)p_8 + 590L)) % (
                   (p_10 - 36UL) + 705UL)));
  }
  else result = (int)(! 3ULL);
  return result;
}


