#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 855425478
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long p_7, char p_11, double p_13)
{
  double v_15;
  unsigned short v_9;
  long long v_5;
  int v;
  short result;
  v = -227020111;
  v_15 = (double)p_7;
  v_9 = (unsigned short)((double)(((-61098LL * (long long)v) % (long long)(
                                   v + 549)) * (long long)((double)p_11 - 
                                                           p_13 / -5812068.44708)) - - v_15);
  v_5 = (long long)(p_7 << (- v & 31));
  result = (short)((double)v + (- (- p) + (double)((v_5 / (long long)(
                                                    p_7 + 591L)) % (long long)(
                                                   (int)v_9 + 299))));
  return result;
}


