#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42639462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, signed char p_5, unsigned char p_11, signed char p_19)
{
  signed char v_17;
  unsigned char v_15;
  unsigned char v_13;
  double v_9;
  unsigned long v_7;
  int v;
  float result;
  v_15 = (unsigned char)196;
  v_13 = (unsigned char)p_5;
  v_9 = -2.05561120969e+38;
  v_7 = (unsigned long)p_19;
  v = 161;
  while ((int)(- (- v_9 * (double)(- p_11))) <= ! ((int)(! v_13) % ((int)((unsigned char)(
                                                                    2.80966685131e+38 / (
                                                                    (double)p + 727.))) + 916))) {
    v_17 = (unsigned long long)v_15 * 64537ULL;
    v_15 = (unsigned char)p_5;
    v_7 = (unsigned long)(((long)((int)v_17 / -96) - p) - (long)((double)p_19 / (
                                                                 v_9 + 926.) - 5208.));
    v_9 = (double)p_5;
  }
  while_0_break: ;
  result = (float)(((long)(-51339 * v) + (p - (long)p_5)) >> (v_7 & 31UL));
  return result;
}


