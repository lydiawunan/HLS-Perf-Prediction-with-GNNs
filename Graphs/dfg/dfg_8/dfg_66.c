//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131426346
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned long p_7, long p_9, long long p_13)
{
  unsigned long v_11;
  double v_4;
  unsigned long v;
  float result;
  v_11 = 79947806UL;
  v_4 = 2.16580739488e+38;
  v_11 = (unsigned long)(p_13 - (long long)v_11);
  v_4 = - v_4;
  v = (unsigned long)(-8819LL & ((long long)(v_4 * (double)p + (double)(
                                             p_7 / (unsigned long)(p_9 + 182L))) | 
                                 (long long)v_11 * - p));
  result = (float)((v - 4247789440UL) / 21219UL);
  return result;
}


