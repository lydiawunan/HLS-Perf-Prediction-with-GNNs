#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488145268
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[2], long p_9, unsigned long p_11,
                 unsigned long p_17, float p_19[4][4][2])
{
  long v_21;
  signed char v_15;
  float v_13;
  unsigned int v_7;
  double v_5;
  signed char v;
  unsigned int result;
  v_21 = -997347922L;
  v_13 = 2903313664.f;
  v_7 = (unsigned int)p[0];
  v_5 = -262.44597357;
  v = (signed char)59;
  result = (unsigned int)p_17;
  if (- ((double)p[1] + 2.12884333445e+38) * ((double)(~ p[0]) * - v_5) < (double)v) {
    result = (unsigned int)v_21;
    v_15 = (signed char)(~ (! (- p_17)));
    v_5 = (double)6966ULL;
  }
  else {
    v_7 = (unsigned int)(- ((unsigned long)p[0] / 608163314UL) + (unsigned long)(
                         (double)(v_13 - -83.f) * (780.854512098 / ((double)p_17 + 442.))));
    v_5 = (double)(! p_9);
    v_15 = (signed char)(- ((unsigned long)v_21 % (unsigned long)(result + 689U) + (unsigned long)(
                            -890714133 - (int)v)));
  }
  while ((unsigned long long)(- (- ((int)v - (int)p[1]))) < (unsigned long long)(
                                                            (unsigned int)(- v_5) - ! v_7) % (
                                                            (unsigned long long)(
                                                            (unsigned long)p_9 / (
                                                            p_11 + 871UL)) / 17ULL + 819ULL)) {
    v_5 = (unsigned long long)v_15 * 930026000ULL;
    v_7 = (unsigned int)(((float)(p_17 / 4294915842UL) / (v_13 + 526.f)) * (
                         (float)(~ p_9) * (p_19[1][1][0] * (float)v_7)));
    v = (signed char)((double)(- v_13 * (float)(- p[1])) / (v_5 + 150.));
    v_5 = (double)(((unsigned long)(- p[1]) ^ 4UL % (p_11 + 199UL)) * 4294909639UL);
  }
  while_0_break: ;
  return result;
}


