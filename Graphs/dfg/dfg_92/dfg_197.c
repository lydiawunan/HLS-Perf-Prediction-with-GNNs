#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 301630271
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, char p_7, unsigned int p_9, char p_11,
           char p_13[2][2])
{
  unsigned char v_15;
  double v_5;
  float v;
  double result;
  v_15 = (unsigned char)31;
  v = (float)p;
  v_5 = (double)((2006326495U % (((unsigned int)((int)p_11 % ((int)p_13[0][0] + 417)) - 
                                  (unsigned int)p_13[1][0] / (p_9 + 259U)) + 84U)) % (unsigned int)(
                 ! (! ((int)((unsigned char)v) + (int)v_15)) + 243));
  v = (float)((! ((unsigned long long)p_7 % (p + 710ULL)) + (unsigned long long)p_9) % 18446744073709551614ULL);
  result = (double)0;
  return result;
}


