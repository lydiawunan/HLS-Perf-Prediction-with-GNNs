#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 371804334
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, float p_5, unsigned long p_7, unsigned int p_9,
           double p_15[3][5])
{
  long long v_13;
  double v_11;
  char v;
  double result;
  v_13 = (long long)p_15[1][3];
  v_11 = - (- (- p_15[1][4])) / ((double)((long long)p * ((long long)p_15[1][3] + 46827LL)) + 784.);
  result = (double)(- (! (v_13 & (long long)p_7) - 237LL));
  v = (char)result;
  result = (double)((unsigned int)((int)v + ((int)p ^ (int)((char)(p_5 + (float)p_7)))) % (
                    (unsigned int)(- result - -973.848754883) * ~ (p_9 / (
                                                                   (unsigned int)v_11 + 133U)) + 373U));
  return result;
}


