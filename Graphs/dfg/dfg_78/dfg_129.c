#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 57611223
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, float p_5, unsigned int p_9, int p_13, unsigned int p_15)
{
  unsigned char v_11;
  unsigned char v_7;
  double v;
  short result;
  v_11 = (unsigned char)243;
  v = 7.33261484508e+36;
  v_7 = (unsigned char)(- p_5);
  result = (short)(((unsigned long)p_15 - 667380UL) + (unsigned long)5981679436.71);
  v_7 = (unsigned char)(((((long long)v_11 % -53408LL) % ((long long)(
                                                          (double)p * v) + 875LL)) / (
                         (long long)(- p_5) + 453LL)) % (long long)(p_13 / (
                                                                    (
                                                                    (int)v_11 - p_13) * (int)v_7 + 959) + 83));
  result = (short)((long)(v + (double)result * -798.22498536) - p / (
                                                                (long)(
                                                                - p_5 - (float)(
                                                                (unsigned int)v_7 / (
                                                                p_9 + 389U))) + 1002L));
  return result;
}


