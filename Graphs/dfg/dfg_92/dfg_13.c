#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 861550633
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, short p_9[5], unsigned long long p_11, double p_13,
                short p_19[1])
{
  unsigned int v_17;
  unsigned int v_15;
  double v_7;
  int v_5;
  unsigned short v;
  signed char result;
  v_17 = 4294906218U;
  v_15 = (unsigned int)p_13;
  v_7 = 370115823.237;
  v_5 = (int)p_13;
  result = (signed char)109;
  v_15 = (! v_17 / 4294967286U) * (unsigned int)p_19[0] + (unsigned int)(
         (double)((long long)(~ v_15)) / ((1.84467440737e+19 / (p_13 + 118.) - (double)(
                                           v_5 - 1360)) + 833.));
  v_5 = (int)(~ p_9[0]);
  v = (unsigned short)((double)((int)p % ((int)(~ p) * (int)p_9[3] + 344)) + (
                       ((double)p_11 * p_13) * (double)((int)result / (
                                                        (int)p_9[3] + 442)) - (double)(
                       ! v_15 / (v_15 + 277U))));
  result = (signed char)((unsigned long long)(- (((int)p << ((int)v & 7)) % (
                                                 ~ v_5 + 651))) & - (
                         (unsigned long long)(683194932 - (int)v_7) * 128907784ULL));
  return result;
}


