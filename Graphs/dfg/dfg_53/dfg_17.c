#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 351213474
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, double p_7, signed char p_11)
{
  unsigned long v_9;
  signed char v_4;
  double v;
  short result;
  v_9 = (unsigned long)p_11;
  v_4 = (signed char)-5;
  v = (double)((unsigned long)(- p_7) / (v_9 * (unsigned long)((int)v_4 % (
                                                               (int)p_11 + 213) ^ -79) + 519UL));
  v_4 = (signed char)p;
  result = (short)(- (- (- v) * (double)(18446744073709515111ULL + (unsigned long long)v_4)));
  return result;
}


