//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 318275422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, float p_5[3][4], unsigned long p_7,
              long long p_11[2][2], unsigned long p_13)
{
  int v_9;
  float v;
  long long result;
  v_9 = (int)p_7;
  result = (long long)(! (- (p_13 % (unsigned long)((int)p + 556))) % (
                       p_13 + 305UL));
  v = (float)(result & ((long long)(p_5[1][3] / ((float)(p_7 % (unsigned long)(
                                                         v_9 + 727)) + 900.f)) + (
                        p_11[0][0] / 4015371880LL - 12LL)));
  result = (long long)p;
  result = ~ (- ((long long)p * result)) + (long long)(- v);
  return result;
}


