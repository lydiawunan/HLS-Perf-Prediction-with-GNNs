#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764333643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, signed char p_5[1], signed char p_7,
                 double p_9, int p_11[2][3])
{
  unsigned long long v_13;
  unsigned long v;
  unsigned int result;
  result = 4294944723U;
  v_13 = (unsigned long long)(~ (~ (~ result | (unsigned int)p_11[0][2])));
  v = (unsigned long)(0L % (~ ((long)p_11[1][2]) + 629L));
  v = (unsigned long)((unsigned long long)(-5770988544.f / ((float)p_7 + 679.f)) & 
                      (unsigned long long)(~ v % ((unsigned long)p_9 + 86UL)) / (
                      ((unsigned long long)((int)p_5[0] + p_11[1][1]) ^ ! v_13) + 834ULL));
  result = (unsigned int)((- ((unsigned long)-5454113398.42 % (v + 563UL)) / (unsigned long)(
                           (int)p + 67)) * (unsigned long)p_5[0]);
  return result;
}


