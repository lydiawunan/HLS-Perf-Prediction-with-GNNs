#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 376139628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, double p_4, unsigned short p_11)
{
  double v_13;
  unsigned long long v_9;
  unsigned char v_7;
  float v;
  signed char result;
  v_9 = (unsigned long long)p_11;
  v_7 = (unsigned char)22;
  v_13 = (double)251564555ULL;
  v_7 = (unsigned char)((unsigned long long)(-55 % ((int)((char)2.95904677815e+38f) + 708)) / (
                        ((unsigned long long)(((int)v_7 >> (v_9 & 7ULL)) * (int)p_11) - (
                         (unsigned long long)v_13 + - p)) + 997ULL));
  v = (float)((long long)-2.50614259994e+38f - 0 / ((86599506252LL | (long long)(! v_7)) + 538LL));
  result = (signed char)(- (((long long)((double)p + p_4) + 152437272LL) / (
                            (long long)v + 559LL)));
  return result;
}


