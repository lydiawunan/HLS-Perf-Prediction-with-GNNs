#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 67903433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long p_5, long long p_7, long long p_9)
{
  double v_13;
  unsigned char v_11;
  long long v;
  char result;
  v_13 = (double)p_5;
  v_11 = (unsigned char)p_7;
  if (- p == (float)((int)v_11 - (int)((unsigned char)v_13))) v = (long long)p;
  else v = 4294907191LL;
  result = (char)((148LL * v) * 4294957682LL);
  return result;
}


