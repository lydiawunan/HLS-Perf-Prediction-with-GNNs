#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 899711373
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long long p_11)
{
  double v_13;
  long long v_8;
  short v_6;
  signed char v_4;
  double v;
  signed char result;
  v_13 = 677.98593324;
  v = (double)p_11;
  v_4 = (signed char)(p_11 % ((long long)(7.13044548035 / (- v_13 + 821.)) + 516LL));
  v_8 = (long long)p;
  v_6 = (short)(99 + (int)(- (~ v_4)));
  result = (signed char)((- v + (double)v_4) / (((double)v_6 * v + (double)(~ v_8)) + 717.) + 1372049.75571);
  return result;
}


