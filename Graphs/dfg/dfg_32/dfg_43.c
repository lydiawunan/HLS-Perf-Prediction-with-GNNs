#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 776296269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p)
{
  long long v_6;
  int v_4;
  float v;
  int result;
  v_4 = 41280;
  v_6 = (long long)p;
  v = (float)((v_4 - v_4) << (- (v_6 / 8896LL) & 31LL));
  result = (int)((unsigned short)(-38.f - v)) % 59776;
  result = (int)((((long long)result + -50728LL) + (long long)result) * (long long)result);
  return result;
}


