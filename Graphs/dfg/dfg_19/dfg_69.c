#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658532132
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_5[5][1][2])
{
  char v_13;
  int v_11;
  double v_9;
  unsigned short v_7;
  signed char v;
  double result;
  v_13 = (char)p_5[3][0][1];
  v_11 = (int)p_5[4][0][0];
  v_7 = (unsigned short)(~ (- (! (v_11 * (int)v_13))));
  v_9 = (double)(~ (! p) % ((unsigned long)((int)v_7 % 28591) * p + 755UL) + (unsigned long)p_5[4][0][1]);
  v = (signed char)((- ((int)p_5[3][0][1] | (int)v_7) - ! (3954 / ((int)((short)v_9) + 893))) % 105);
  result = (double)(~ ((unsigned long)(~ v) * (3019UL + p)));
  return result;
}


