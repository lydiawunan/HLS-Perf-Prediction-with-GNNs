#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 662361054
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned int p_4, int p_6[2][3], unsigned int p_8,
        signed char p_10)
{
  char v;
  int result;
  v = (char)(- p_6[1][1] / 132);
  result = (int)(~ ((((unsigned int)p_6[0][0] - p_8) / (p_8 + 584U)) * (
                    (unsigned int)((int)p_10 << (p_4 & 7U)) * (p_8 ^ (unsigned int)v))));
  result = (int)((double)result - - (p * (double)p_4 + - p));
  result = ~ (- (! (result + -104)));
  return result;
}


