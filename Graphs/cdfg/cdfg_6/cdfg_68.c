#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 149942384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, long p_4, unsigned long long p_7,
                 char p_11[1][5][5], unsigned int p_13[2])
{
  unsigned int v_19;
  int v_17;
  float v_15;
  int v_9;
  unsigned int v;
  unsigned int result;
  v_19 = 12424U;
  v_17 = (int)p_7;
  v = 3996011436U;
  v_15 = (float)(! (50875ULL % (p_7 + 574ULL)));
  if ((float)((long long)(v * p_13[0]) | ((long long)2.78390938816e+38f - -47864705LL)) / (
      ((v_15 - (float)p_11[0][0][4]) - (float)v_17) + 871.f) < (float)(~ (
      (unsigned long)v_19 * (unsigned long)(- p)))) {
    v_9 = (int)(3249675870ULL - - p_7);
    v = (unsigned int)(- (- (p_7 + (unsigned long long)v_9)));
    result = (unsigned int)(((unsigned long)(~ p) / ((unsigned long)p_4 * (unsigned long)v + 882UL)) * (unsigned long)(- v));
  }
  else result = (unsigned int)((unsigned long)(~ (~ p_11[0][1][1])) - (
                               2704914016UL + (unsigned long)(p_4 ^ 42671L)));
  return result;
}


