#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944019456
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned int p_11, long long p_13, short p_17)
{
  double v_15;
  long long v_9;
  unsigned int v_7;
  long long v_5;
  long v;
  int result;
  v_15 = 924.611839478;
  v_9 = (long long)p;
  v_7 = p_11;
  v_5 = -200641739LL;
  v_7 = (unsigned int)((~ v_5 * ! p_13 - -7550LL) - (long long)((unsigned long)(
                                                                (double)v_7 + v_15) % 705077416UL - (unsigned long)p_17));
  v_5 = ((long long)(- (! v_7)) + v_9) % (long long)((unsigned int)((int)p % (
                                                                    (int)((unsigned char)-3.32758160865e+38f) * 185 + 689)) * (
                                                     (unsigned int)(- p) | ! p_11) + 154U);
  v = (long)(~ (- v_5));
  result = (int)(v / (long)((int)(- (- (- p))) + 854));
  return result;
}


