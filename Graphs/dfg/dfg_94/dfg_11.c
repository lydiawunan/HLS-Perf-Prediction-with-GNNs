#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 512067110
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long long p_5, long long p_7,
           short p_13[3][2][1])
{
  long v_17;
  int v_15;
  long v_11;
  long v_9;
  unsigned long v;
  double result;
  v_17 = 29698L;
  v_15 = -679110262;
  v_11 = (long)p_13[0][1][0];
  v = (unsigned long)(~ (- (((long)v_15 * v_17) * 56408L)));
  v_9 = (long)((((long long)((long)p * v_11) + p_7) / 7LL) / (long long)(
               (int)(! (! (~ p_13[2][1][0]))) + 932));
  v = (unsigned long)v_9 - v;
  result = (double)((float)((unsigned long long)p / ((unsigned long long)v / (
                                                     p_5 + 907ULL) + 384ULL)) / (
                    ((float)v + (float)p_7 * -3033536000.f) + 254.f) + (float)(
                    - (v_9 - (long)p) - 152L));
  return result;
}


