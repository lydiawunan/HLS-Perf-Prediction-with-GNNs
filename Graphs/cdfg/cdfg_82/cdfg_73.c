#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590589665
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, signed char p_11, unsigned long p_15[5][4])
{
  long v_13;
  long long v_9;
  float v_7;
  long long v_4;
  unsigned long v;
  unsigned long result;
  v_9 = (long long)p_11;
  v_7 = (float)p_15[1][2];
  v_4 = 47179LL;
  v = 13232UL;
  while (! v_4 != (long long)(((int)p / ((int)((unsigned char)v_7) % 9 + 414)) / (
                              (int)(7721069639.19 / ((double)(29LL / (
                                                              v_4 + 896LL)) + 651.)) + 906))) {
    v_13 = v_9 / -58739LL;
    v = ~ ((unsigned long)2.17389900791e+38 + p_15[2][3]);
    v_9 = (long long)v_7;
    v_4 = (long long)((unsigned long long)((1062079286LL & (long long)p_11) % 81LL) + 
                      (18446744073709525420ULL | (unsigned long long)p) * (unsigned long long)(
                      v_13 - (long)p));
  }
  while_0_break: ;
  result = v;
  return result;
}


