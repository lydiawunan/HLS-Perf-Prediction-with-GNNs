#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 969139235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, float p_4[5][4], unsigned long long p_6[3][2][2],
         signed char p_8, signed char p_10)
{
  signed char v_15;
  float v_13;
  double v;
  long result;
  v_15 = (signed char)-111;
  v_13 = 5432387584.f;
  v = (double)v_15;
  if ((unsigned int)(((int)p * 59) % ((int)v + 643) - ! ((int)p_8 | -70)) == ! (~ (
      (unsigned int)v_13 - 217728749U))) result = -177725412L;
  else result = (long)(- ((float)p - p_4[1][0]) / ((float)p_6[1][0][1] + 482.f));
  return result;
}


