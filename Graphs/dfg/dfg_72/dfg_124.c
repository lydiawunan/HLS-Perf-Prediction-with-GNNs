#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 790573125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, long long p_5[2][4][5], short p_9)
{
  unsigned long v_7;
  unsigned int v;
  unsigned long long result;
  v = (unsigned int)p_9;
  v_7 = 4294956725UL;
  v = (unsigned int)((unsigned long)((unsigned int)(- ((float)p_5[1][2][3] / 1.97789150112e+38f)) - 
                                     v * 10U) * v_7);
  result = (unsigned long long)(- ((long long)((4294961245U + v) / 1828U) & p));
  return result;
}


