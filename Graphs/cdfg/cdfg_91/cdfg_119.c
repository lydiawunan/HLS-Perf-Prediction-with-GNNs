#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 845532763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, signed char p_7, unsigned long p_9, float p_13)
{
  long long v_15;
  int v_11;
  unsigned long v_5;
  int v;
  int result;
  v_15 = 219216697LL;
  v_5 = 4294961174UL;
  result = (int)p_9;
  v = (int)v_15;
  while (((int)(- (p + p)) & 242879710) >= ! v - (int)(- p)) {
    v_11 = (long long)v_5 | 1005684242LL;
    result = v_11 + (int)p_13;
    v_5 = (unsigned long)(~ (51825ULL - (unsigned long long)((unsigned long)p_7 / (
                                                             p_9 + 434UL))));
    v = (int)(v_5 % (unsigned long)(~ (- result) + 215));
  }
  while_0_break: ;
  return result;
}


