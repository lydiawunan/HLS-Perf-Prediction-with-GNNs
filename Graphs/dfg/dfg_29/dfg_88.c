#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837236835
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, long p_9, float p_13)
{
  double v_17;
  unsigned long v_15;
  unsigned short v_11;
  double v_7;
  unsigned int v_4;
  unsigned int v;
  short result;
  v_17 = (double)p;
  v_15 = (unsigned long)p_13;
  v_4 = 62314U;
  v = (unsigned int)p_9;
  v_11 = (unsigned short)((((long long)((long)v_17 * p_9) - -1963LL) * (long long)(
                           (unsigned long)p_9 % (v_15 + 458UL))) / -6674823680LL);
  v_7 = (double)((unsigned long)((614L - (p_9 + (long)v_11)) / ((long)(- p_13) + 946L)) / (
                 - v_15 + 83UL));
  result = (short)p;
  result = (short)(4294967073U * ((((unsigned int)result - v) - (v_4 - 4294954952U)) * (
                                  (60067U | (unsigned int)p) + (unsigned int)(
                                  (int)p - (int)((unsigned char)v_7)))));
  return result;
}


