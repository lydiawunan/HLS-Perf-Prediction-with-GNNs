#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572009437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, int p_4, unsigned int p_7, long long p_9, int p_11)
{
  unsigned char v;
  long long result;
  result = (long long)p_11;
  v = (unsigned char)p_9;
  result = (long long)(934722815L / ((long)p / 62814L + 621L) << (((long long)p_4 % (
                                                                   (long long)p_4 * result + 157LL) - 
                                                                   -38120LL * (long long)(
                                                                   (unsigned int)v - p_7)) & 31LL));
  return result;
}


