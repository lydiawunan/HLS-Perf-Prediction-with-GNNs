#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702318046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[5], unsigned int p_5, unsigned char p_9,
                  float p_11, int p_13)
{
  unsigned char v_21;
  float v_19;
  long long v_17;
  double v_15;
  unsigned long v_7;
  char v;
  unsigned char result;
  v_21 = (unsigned char)p_5;
  v_19 = (float)p_13;
  v_17 = (long long)p_5;
  v_15 = (double)p_13;
  v_7 = (unsigned long)((((double)p_9 + v_15) + (double)((float)v_17 / (
                                                         v_19 + 910.f))) * (double)(
                        p_13 % 11018 | 11) + (double)((p_11 - (float)v_21) + (float)(
                                                      10479L % ((long)p_11 + 517L))));
  v_7 = ! (((unsigned long)p[2] / (v_7 + 175UL)) / 31046UL) % (- (v_7 * (unsigned long)(
                                                                  p_13 + -13684)) + 850UL);
  v = (char)(~ (((unsigned long)p_5 / (v_7 + 336UL) ^ (unsigned long)p_9) - (unsigned long)(
                3411358464.f + ((float)p[3] + p_11))));
  result = (unsigned char)((int)p[3] % (((int)v + 774063691) + 646));
  return result;
}


