#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 652921317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, long p_5, long long p_11,
                       unsigned long p_13, long p_15)
{
  unsigned long v_23;
  double v_21;
  short v_19;
  unsigned long long v_17;
  int v_9;
  double v_7;
  unsigned short v;
  unsigned long long result;
  v_23 = 4294923530UL;
  v_21 = 894.227538235;
  v_19 = (short)p_5;
  v_9 = 707762351;
  v_7 = (double)p_13;
  while ((unsigned long)(- ((double)(! v_9) / (v_21 + 401.))) != - (p_13 - (unsigned long)(
                                                                    p_5 - (long)-9638992896.f))) {
    v_7 = (unsigned long long)v_23 / 425277290ULL;
    v_23 = (unsigned long)(~ p_11);
    v_19 = (short)(- (- -831946777L));
    v_9 = (int)((double)(! p_11) + (double)(- v_19) / (p + 200.));
  }
  while_0_break: ;
  if ((double)((long long)v_19 / (p_11 + 142LL)) < - (p + (double)p_5)) {
    v_9 = (int)p_11;
    v = (unsigned short)((v_7 - (double)((unsigned int)v_7 ^ 424867633U)) + (double)(
                         -22483 * - v_9));
    result = (unsigned long long)(- ((int)(~ v) - (int)((unsigned short)(
                                     p * (double)p_5))));
  }
  else {
    v_17 = (unsigned long long)p_13;
    result = (unsigned long long)((long long)(p_13 * 46176UL) - ((long long)p_15 | p_11)) / (
             ((unsigned long long)(p_15 * p_15) - 4294964230ULL / (v_17 + 817ULL)) + 480ULL);
  }
  return result;
}


