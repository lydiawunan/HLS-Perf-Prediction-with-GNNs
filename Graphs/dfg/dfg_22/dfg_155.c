#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24911857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned long long p_4, int p_6[3][4][5],
                 double p_11, long long p_15[1])
{
  long v_13;
  long long v_9;
  unsigned long long v;
  unsigned int result;
  v_9 = -742551217LL;
  v_13 = (long)(0. * ((double)v_9 - ((-146.349777222 + p_11) + 4243288040.)));
  v = (unsigned long long)((~ ((long long)v_13 % (p_15[0] + 735LL)) | p_15[0]) / 200LL);
  v_9 = (long long)(~ p % (unsigned long)(- (- ((int)((unsigned char)p_11) + 234)) + 758));
  result = (unsigned int)((((unsigned long long)p ^ p_4) + (unsigned long long)(
                                                           195476500L + (long)p_6[2][0][2]) % (
                                                           v / ((unsigned long long)7.78927230305e+37f + 894ULL) + 384ULL)) + (unsigned long long)v_9);
  return result;
}


