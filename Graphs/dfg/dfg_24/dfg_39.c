#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690779799
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, int p_9, float p_11)
{
  char v_13;
  double v_6;
  double v_4;
  unsigned int v;
  signed char result;
  v_13 = (char)p;
  v_6 = (double)v_13;
  v_4 = (double)(p_11 + 3.0736726132e+38f);
  v = (unsigned int)(- (v_4 / ((v_6 - (double)(p % (unsigned int)(p_9 + 614))) + 679.)));
  result = (signed char)(0 / (unsigned long long)(v + 893U));
  return result;
}


