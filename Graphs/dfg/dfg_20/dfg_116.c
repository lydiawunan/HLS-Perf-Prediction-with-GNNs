#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 319009692
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, float p_5[5], signed char p_7[4][3][2], float p_9,
                int p_15)
{
  signed char v_13;
  char v_11;
  char v;
  signed char result;
  v_13 = (signed char)p;
  v = (char)p_7[3][2][1];
  result = (signed char)-4;
  v_11 = (char)((float)result - - (- p_9 + (float)(p_15 / ((int)result + 99))));
  result = (signed char)((int)v_11 ^ ((int)result + (int)v_13) / (! (
                                                                  p_15 ^ (int)v) + 838));
  v = (char)result;
  result = (signed char)((((369616320.f - (float)v) - p) - (float)(- (
                          (unsigned long long)p_5[2] / 18446744073709517456ULL))) - (float)((long long)(
                         (int)(! result) | (int)p_7[3][0][0] * (int)((signed char)p_9))));
  return result;
}


