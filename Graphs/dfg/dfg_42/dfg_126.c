#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057232253
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned short p_7[2][1])
{
  short v_11;
  int v_9;
  int v_5;
  signed char v;
  float result;
  v_9 = (int)p;
  v = (signed char)p;
  result = -1.0078875943e+38f;
  v_11 = (short)(((long long)(- ((int)p | v_9)) + ! ((long long)p * 39698LL)) & (long long)(
                 (((int)p_7[1][0] + -1347) + (int)(- result)) << 22ULL));
  v_5 = (int)(- (- (((unsigned long long)v_9 - 18446744072894683073ULL) - (unsigned long long)v_11)));
  result = (float)(((unsigned long long)(~ (- v_5)) - 18446744073709542645ULL) + (unsigned long long)(
                   - (878163514LL + (long long)p_7[0][0]) - 4294903217LL));
  result = (float)(0LL % (((long long)(102.f * result) + (long long)(
                           (v_5 - (int)p) + (int)p % ((int)p + 548))) + 753LL));
  return result;
}


