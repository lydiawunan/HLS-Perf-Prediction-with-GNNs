#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112926604
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, short p_7, unsigned long p_11,
                       unsigned int p_15)
{
  unsigned char v_17;
  int v_13;
  double v_9;
  unsigned char v_5;
  float v;
  unsigned long long result;
  v_17 = (unsigned char)54;
  v_13 = 56651;
  v_9 = (double)(- ((- p_11 / (unsigned long)(v_13 + 736)) * (unsigned long)(
                    p_15 % (unsigned int)((int)v_17 + 18))));
  v = (float)v_9;
  v_5 = (unsigned char)(-24799L + (long)(~ p_7));
  result = (unsigned long long)(- (- (- v)) + (float)(- (((int)p * 95) * (
                                                         (int)v_5 - 21425))));
  return result;
}


