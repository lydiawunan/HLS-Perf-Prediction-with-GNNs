#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256692390
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, signed char p_7[1][4][2],
                 unsigned char p_9, unsigned long long p_11, short p_17)
{
  unsigned int v_21;
  long long v_19;
  unsigned int v_15;
  unsigned long long v_13;
  unsigned long long v_5;
  unsigned int v;
  unsigned int result;
  v_21 = 4294921541U;
  v_19 = (long long)p_11;
  v_13 = p_11;
  v_15 = (unsigned int)((3301659736LL << 56) - ~ (v_19 % (long long)(
                                                  v_21 + 620U) - (long long)(
                                                  (unsigned int)p & v_21)));
  v_5 = - (58ULL * v_13) / (unsigned long long)(((41U - v_15) - (unsigned int)(
                                                 (int)p_17 - (int)p_17)) + 197U) - (unsigned long long)(- p_7[0][2][0]);
  v = (unsigned int)((int)((double)((unsigned long long)((int)p - (int)p_9) % (
                                    (p_11 + (unsigned long long)p_9) + 412ULL)) - -3.00043797056e+38) ^ 50609);
  result = (unsigned int)((unsigned long long)(((103U + v) / (unsigned int)(
                                                (int)p + 835)) % 46668U) * (
                          (unsigned long long)(- (- p)) | ! (v_5 - (unsigned long long)p_7[0][3][0])));
  return result;
}


