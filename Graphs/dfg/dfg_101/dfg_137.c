#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 281807170
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned int p_5, char p_7, unsigned short p_11,
                 int p_15[4][4][5])
{
  long v_13;
  char v_9;
  double v;
  unsigned int result;
  v_9 = (char)-68;
  v = (double)((int)(- p_11) - p_15[3][0][1]);
  v_13 = (long)(! p_15[2][3][0]);
  result = (unsigned int)((long)((int)(- (-480996117. / (v + 359.))) | 
                                 (int)(p - (double)p_5) % (((int)p_7 >> (
                                                            (int)v_9 & 7)) + 805)) / (
                          ! (((long)p_11 * v_13) / ((long)-3.53103052645e+19 + 922L)) + 410L));
  result = ~ result;
  return result;
}


