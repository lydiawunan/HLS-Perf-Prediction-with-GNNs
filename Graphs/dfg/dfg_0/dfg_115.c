//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 642545989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, short p_4, int p_7[5])
{
  unsigned int v_9;
  long v;
  signed char result;
  v_9 = 419629834U;
  result = (signed char)((unsigned int)p_7[0] - ((unsigned int)p_7[1] | ~ (
                                                 56629U * v_9)));
  v = (long)2.308659268e+38f;
  result = (signed char)((unsigned long)(~ p) / (unsigned long)(((long)(
                                                                 (double)(
                                                                 (int)p_4 | (int)result) / 2347698752.05) << (
                                                                 v & 31L)) + 426L));
  return result;
}


