#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072959876
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, long p_4, unsigned long p_6, long long p_9[3])
{
  unsigned long v_13;
  unsigned char v_11;
  char v;
  double result;
  v_13 = 3412249769UL;
  v = (char)86;
  v_11 = (unsigned char)182;
  if ((long long)(p_6 / (unsigned long)((p - (unsigned int)v) / 32685U + 756U)) <= 
      (p_9[2] + (long long)((int)v_11 % 1506)) + (long long)v_13) result = (double)(
                                                                  316038278UL * (unsigned long)p);
  else result = (double)p_4;
  return result;
}


