#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692318636
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, double p_4, short p_6, unsigned int p_8, double p_11[2][2])
{
  unsigned long long v_13;
  unsigned long long v;
  float result;
  v_13 = (unsigned long long)p_11[1][1];
  result = (float)p_4;
  v = ! (0ULL % ((unsigned long long)p_8 * v_13 + 352ULL) + - (18446744073036401792ULL - v_13));
  v_13 = 210ULL;
  result = (float)(((unsigned long long)((851642311U / (unsigned int)(
                                          (int)p_6 + 572)) * (p_8 ^ (unsigned int)result)) - 
                    (52498ULL % (v + 44ULL)) % 18446744073707075035ULL) % (
                   ((unsigned long long)(- (p_11[0][1] + (double)p_6)) + 
                    (unsigned long long)-727.21508516 / ((v_13 - (unsigned long long)-2.07152978167e+38) + 637ULL)) + 611ULL));
  result = (float)(p % ((long)(((double)result * p_4 + - p_4) / ((double)(- p) + 5.)) + 714L));
  return result;
}


