#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329479231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned long p_4, int p_6, signed char p_9,
          unsigned int p_11)
{
  double v_21;
  char v_19;
  double v_17;
  long long v_15;
  unsigned long v_13;
  unsigned short v;
  float result;
  v_21 = 1.88849938239e+38;
  v_19 = (char)p;
  v_17 = (double)p_4;
  result = (float)p;
  v_15 = (long long)((unsigned long)(((int)((signed char)(v_21 / ((double)p + 252.))) + (int)p_9) & (int)p_9) + 4294967295UL);
  v_13 = 4046395648UL;
  v = (unsigned short)(((long long)v_13 % ((v_15 - (long long)p_6) + 590LL)) / (
                       (long long)v_17 + 802LL) - (long long)(((unsigned long)v_19 / (
                                                               p_4 + 383UL)) / (
                                                              ((unsigned long)p_9 ^ p_4) + 665UL)) % (
                                                  (((long long)p_11 ^ -59690LL) ^ -717799716LL) + 922LL));
  result = (float)((unsigned long)(((float)(51918LL - p) - result) + (float)(
                                   p_4 << (p_6 % ((int)v + 226) & 31))) * (
                   (unsigned long)(~ ((unsigned int)p_9 / (p_11 + 376U))) + 
                   (unsigned long)(! p_9) % 774797836UL));
  return result;
}


