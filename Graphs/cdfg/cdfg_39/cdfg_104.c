#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600620477
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, double p_4, double p_6, double p_9, unsigned char p_11)
{
  double v_17;
  unsigned int v_15;
  unsigned int v_13;
  unsigned long long v;
  float result;
  v_17 = 6.16109488994e+36;
  v_15 = 4294956942U;
  v_17 = v_17;
  if ((unsigned long)v_15 < (unsigned long)(-51127L - (long)((int)v_17 * (
                                                             -69 & (int)((char)p_4))))) {
    v = (unsigned long long)(p_9 * (double)(~ ((long long)p_11 / 571638221LL)));
    result = (float)(! ((unsigned long long)((double)p / (p_4 + 28.)) - 
                        (unsigned long long)p_6 % (v + 386ULL)));
  }
  else {
    v_13 = (unsigned int)1.03282949166e+38;
    result = (float)(- (38228. * p_4) - (double)v_13);
  }
  return result;
}


