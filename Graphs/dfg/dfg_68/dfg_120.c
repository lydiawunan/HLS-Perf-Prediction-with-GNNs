#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548801070
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, float p_5, long long p_7, short p_15,
              unsigned char p_19)
{
  unsigned int v_17;
  double v_13;
  unsigned int v_11;
  unsigned char v_9;
  unsigned char v;
  long long result;
  v_17 = 4122296409U;
  v_13 = -1.29364388623e+38;
  v_11 = (unsigned int)p_19;
  v = (unsigned char)((unsigned long)(- (! ((int)p / ((int)p_19 + 462)))) % (
                      (60397UL & (unsigned long)(v_11 % (unsigned int)(
                                                 (int)p_19 + 742))) % (unsigned long)(
                      ((int)p << (p_7 & 7LL)) + 450) + 309UL));
  v_11 = (unsigned int)(~ (13347UL - (unsigned long)(((int)p & 8) - (int)(
                                                     p_5 / ((float)v + 173.f)))));
  v_9 = (unsigned char)(- ((float)p_15 * p_5 + (float)(- (v_17 * v_17))));
  result = (long long)(((((int)v - (int)p) + -104) << (((unsigned int)(
                                                        p_5 + (float)p_7) - 
                                                        (unsigned int)v_9 / (
                                                        v_11 + 964U)) & 31U)) * (int)(
                       17359. - v_13));
  return result;
}


