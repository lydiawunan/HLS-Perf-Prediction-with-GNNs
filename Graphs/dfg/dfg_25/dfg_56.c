#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 67901768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, long long p_5, unsigned char p_9[1][1][2],
           int p_13)
{
  short v_11;
  unsigned long long v_7;
  int v;
  double result;
  v_11 = (short)p_13;
  v_7 = 239549917ULL;
  result = (double)(unsigned char)104;
  v = 132;
  v_7 = - (! (p * (unsigned long long)v)) - ((unsigned long long)((int)(- v_11) - 50454) ^ 
                                             v_7 * (unsigned long long)(
                                             -55436L - (long)p_13));
  result = (double)(- (- p - (unsigned long long)(- v)) * - (((unsigned long long)p_5 % (
                                                              v_7 + 29ULL)) * (unsigned long long)(
                                                             result / (
                                                             (double)p_9[0][0][0] + 791.))));
  return result;
}


