#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403875269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_9, unsigned long p_11)
{
  long long v_15;
  long long v_13;
  double v_7;
  unsigned long long v_4;
  unsigned char v;
  unsigned int result;
  v_15 = 40247LL;
  v_7 = -8.53017601429e+37;
  v = (unsigned char)p_11;
  v_13 = (long long)(~ p_11) / (v_15 + 24LL);
  v_4 = (unsigned long long)((((float)((unsigned long long)v_7 * p_9) + 9.54432898141e+37f) + (float)(
                              (long long)p_11 | (long long)v_7 / (v_13 + 325LL))) / (
                             (float)v_13 + 1023.f));
  v = (unsigned char)(- (! (! v_4)) | (unsigned long long)((int)(- p) & (
                                                           93 | -28 % (
                                                                (int)v + 258))));
  result = (unsigned int)v;
  return result;
}


