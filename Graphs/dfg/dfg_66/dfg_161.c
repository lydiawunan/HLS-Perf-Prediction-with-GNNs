#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672521679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[3], unsigned char p_5, long long p_7, unsigned int p_13,
              float p_15)
{
  char v_11;
  long v_9;
  float v;
  long long result;
  v_11 = (char)(- (- p_15));
  v_9 = (long)(- ((! p_7 + (long long)(-824657615.481 + (double)v_11)) % (long long)(
                  (unsigned int)-8408367104.f % (p_13 / 54U + 441U) + 1011U)));
  v = (float)((long long)p[2] - ((long long)(- p_5) % (p_7 * (long long)v_9 + 95LL)) / (long long)(
                                (int)(~ v_11) + 954));
  result = (long long)v;
  return result;
}


