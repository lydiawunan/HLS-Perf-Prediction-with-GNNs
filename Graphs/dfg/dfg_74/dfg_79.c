#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985863297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned int p_5, short p_7, double p_11, long p_15)
{
  unsigned long v_17;
  double v_13;
  double v_9;
  signed char v;
  short result;
  v_17 = (unsigned long)p_7;
  v_9 = (double)p_15;
  result = (short)p_15;
  v = (signed char)((double)(! result) * ((double)(4294955004U & p_5) * p_11 - (double)(
                                          v_17 + (unsigned long)(~ p_5))));
  v_13 = (double)(! (1 - (long)((double)(v_17 | (unsigned long)v) + v_9 * 659981133.)));
  v_9 = (double)(~ ((unsigned long long)result - 0 % 1022574487ULL));
  result = (short)(((unsigned int)((int)v + 173) % (((unsigned int)p - p_5) + 173U)) % (unsigned int)(
                   (int)p_7 + 239) - (unsigned int)(- (v_9 * p_11 - v_13 / (
                                                                    (double)p_15 + 704.))));
  return result;
}


