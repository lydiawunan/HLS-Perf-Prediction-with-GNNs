//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 717381051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, double p_7, unsigned int p_11)
{
  int v_9;
  short v_5;
  double v;
  unsigned int result;
  v = -1.25534217983e+38;
  v_5 = (short)(- p_7);
  v_9 = (int)((double)p_11 * v);
  result = (unsigned int)(v_9 - - ((int)v_5 / ((int)(- v_5) + 788)));
  result = (unsigned int)(- (((int)((short)v) / 13692) / (((int)p ^ (int)v_5) + 321)) - (int)(
                          (double)(~ (- result)) * p_7));
  return result;
}


