#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92650118
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, char p_7[5], unsigned long p_9, long long p_11,
        unsigned long p_13)
{
  unsigned int v_15;
  unsigned int v_5;
  unsigned char v;
  int result;
  v_15 = (unsigned int)p_9;
  v_15 = (unsigned int)(7323LL << (((unsigned int)p * v_15 - 34U) % 789U & 63U));
  v_5 = (unsigned int)(- (~ ((long long)(p_13 - (unsigned long)v_15) * (
                             (long long)p_7[4] - -6058LL))));
  v = (unsigned char)p_11;
  result = (int)((unsigned long)((int)v * 365) - ((unsigned long)p - (
                                                  (unsigned long)(v_5 ^ (unsigned int)p) | 
                                                  (unsigned long)p_7[3] * p_9)));
  return result;
}


