#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992752349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, double p_7, short p_11, char p_15, unsigned short p_17)
{
  unsigned short v_13;
  long long v_9;
  double v_4;
  double v;
  char result;
  v_9 = 13372LL;
  v = p_7;
  v = - (- (98. - v)) + (double)((long long)(-119 % ((int)p_17 + 324) + 
                                             (int)p_11 / -13));
  v_4 = (double)(~ 480188718ULL);
  v_13 = (unsigned short)(! (~ (! p_15)));
  result = (char)(((v - v_4 / (p + 685.)) + p_7) * (double)(~ (v_9 & (long long)p_11) + (long long)v_13));
  return result;
}


