#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 135181011
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned char p_7, float p_13,
        unsigned long p_15[1])
{
  unsigned long long v_11;
  double v_9;
  unsigned long long v_5;
  unsigned char v;
  int result;
  v_11 = (unsigned long long)p_7;
  v_9 = 288.335471969;
  result = (int)p_13;
  result = (int)((unsigned long)((int)(! p_7) * (int)((unsigned char)(
                                 v_9 / (double)((float)v_11 * p_13 + 406.f)))) / (
                 (4294967286UL - ~ p_15[0] % (unsigned long)(! result + 165)) + 114UL));
  v = (unsigned char)(result - (200 + (int)p_7));
  v_5 = (unsigned long long)(~ (- (~ ((int)p | 12))));
  result = (int)((unsigned long long)((int)p / (((int)((float)v / -2.31281878456e+38f) | (
                                                 (int)p + 57)) + 808)) * ! (- v_5));
  return result;
}


