#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965410506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p[4][3][4], float p_11)
{
  unsigned long long v_9;
  long long v_7;
  float v_5;
  long long v;
  unsigned int result;
  v_9 = 18446744073709533553ULL;
  v_7 = 981322049LL;
  v_9 = v_9;
  v_5 = (float)(600005279ULL ^ ! ((unsigned long long)v_7 - v_9) / ((unsigned long long)(- (- p_11)) + 700ULL));
  v = (long long)-5359321549.37;
  result = (unsigned int)((double)((53009LL / (v + 847LL)) * (long long)(
                                   (float)(p[2][2][0] - 50467L) + - v_5)) + 1.0204932912e+38);
  return result;
}


