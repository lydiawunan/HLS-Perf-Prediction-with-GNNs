#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191068065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned long p_5[3][3][2], double p_7[4],
          long p_9, unsigned int p_13)
{
  unsigned char v_11;
  signed char v;
  float result;
  v_11 = (unsigned char)219;
  v = (signed char)p_13;
  result = (float)(p_7[2] / ((double)(-28410LL * (long long)(! (! p_13))) + 368.));
  result = (float)(- ((p_7[1] * 126274002.) / ((double)((long)v / (p_9 + 899L)) + 903.)) - (double)(
                   (float)((long long)result * (26187LL - (long long)v_11)) + (
                   (float)(! p_13) - result)));
  v = (signed char)(999402936UL - p_5[1][1][1] / (unsigned long)((int)(! (! p)) + 21));
  result = - (- result) + (float)(~ (((int)v - 17364) * ((int)v % ((int)p + 596))));
  return result;
}


