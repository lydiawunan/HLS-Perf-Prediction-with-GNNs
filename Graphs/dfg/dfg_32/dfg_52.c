#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 795118663
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned long p_5, char p_11)
{
  double v_9;
  short v_7;
  short v;
  int result;
  result = (int)p_11;
  v_9 = (double)((unsigned int)p_11 / 3661091956U);
  v = (short)(- (485919222. * (v_9 / ((double)p_5 + 1019.))) + -61.);
  v_7 = (short)result;
  result = (int)(~ ((unsigned long)(! ((int)v - (int)p)) * ((p_5 / (p_5 + 393UL)) * (unsigned long)(
                                                            (int)p + (int)v_7))));
  return result;
}


