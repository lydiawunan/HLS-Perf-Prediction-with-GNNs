#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 816309179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_7, unsigned long p_9, long p_11)
{
  double v_13;
  short v_5;
  short v;
  double result;
  v_13 = (double)p_7;
  result = (double)p_11;
  v = (short)((double)(- ((p_9 * 6463UL) * (unsigned long)(82L | p_11))) - - (- v_13));
  v_5 = v;
  v = (short)(((unsigned long)v_5 | ((unsigned long)v_5 + p) * (unsigned long)(- p_7)) | (unsigned long)p_7);
  result = ((double)p + (result + (result - (double)v))) - 3673893688.;
  return result;
}


