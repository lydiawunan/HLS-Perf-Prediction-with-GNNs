#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225056662
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, int p_7, float p_11, char p_13[2][3])
{
  unsigned int v_9;
  unsigned int v_5;
  double v;
  long result;
  v = (double)p_7;
  v_9 = (unsigned int)(((int)((unsigned short)(0. / ((-1649. - v) + 794.))) - (int)p) / (
                       ((2219724 + (int)(- p_13[0][1])) ^ -27440) + 607));
  v_5 = (unsigned int)(! (- ((int)((double)v_9 / (v + 877.)) / 544019116)));
  result = (long)p_11;
  result = (long)((unsigned long)(52L % ((result / (long)((int)p + 774) - (long)(
                                          (int)v | 42815)) + 350L)) / (unsigned long)(
                  ((202U ^ v_5 * (unsigned int)p_7) - 0U % (- v_9 + 51U)) + 289U));
  return result;
}


