#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 149868251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, float p_7)
{
  unsigned short v_13;
  signed char v_11;
  long long v_9;
  float v_5;
  long long v;
  unsigned short result;
  v_13 = (unsigned short)8385;
  v_9 = -162637000LL;
  v_5 = 30.0545978546f;
  result = (unsigned short)37391;
  v_9 = (long long)((double)v_9 + (double)((int)result >> 1) * (((double)p / 8936434752.22) / (
                                                                (double)(
                                                                29971ULL * (unsigned long long)v_13) + 385.)));
  v_11 = (signed char)1.99397017851e+38f;
  v = (long long)((((unsigned long long)(3254377909UL - (unsigned long)p_7) + p) - (unsigned long long)(
                   (long long)(v_5 - v_5) & v_9)) % (unsigned long long)(
                  (long long)(5167 / ((int)(! v_11) + 334)) / -640082633LL + 807LL));
  result = (unsigned short)(- (~ (! p) - (unsigned long long)(- ((float)v + v_5))));
  return result;
}


