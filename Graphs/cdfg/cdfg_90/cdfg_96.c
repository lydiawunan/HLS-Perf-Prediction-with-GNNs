#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681063190
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned long long p_7[2], short p_11,
                  unsigned long p_13)
{
  signed char v_9;
  int v_5;
  double v;
  unsigned char result;
  v_9 = (signed char)-119;
  v_5 = 60618;
  v = (double)p_7[0];
  result = (unsigned char)p_7[0];
  while ((int)((unsigned char)(- p)) == (int)result) {
    result = (float)v_5 / 1092.24719238f;
    v_5 = (int)(~ (p_13 / 63977UL) * 43242UL);
    v = (double)(((unsigned long long)result + p_7[1]) % (unsigned long long)(
                 (int)v_9 / ((int)((signed char)p) + 481) + 108) ^ (unsigned long long)(
                 (long long)(5105 & (int)p_11) + 879095827LL));
    result = -(unsigned char)85;
  }
  while_0_break: ;
  result = (unsigned char)((double)p * - (1.23589685077e+38 * v));
  return result;
}


