//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 715180441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, signed char p_5[3], int p_7,
                 unsigned long long p_13[2][4], unsigned long long p_15)
{
  double v_11;
  unsigned char v_9;
  float v;
  unsigned int result;
  v = (float)p_13[1][2];
  result = (unsigned int)(430755621ULL * ~ (- (- p_13[0][0])));
  v_9 = (unsigned char)211;
  v_11 = (double)((unsigned long long)result - (unsigned long long)(78 + p_7) % (
                                               p_13[0][2] / (p_15 + 898ULL) + 132ULL));
  result = (unsigned int)((double)(- (- v) / ((float)(- p) * ((float)p_5[1] * v) + 975.f)) + (
                          (double)(result % (unsigned int)((p_7 ^ (int)v_9) + 293)) - v_11));
  return result;
}


