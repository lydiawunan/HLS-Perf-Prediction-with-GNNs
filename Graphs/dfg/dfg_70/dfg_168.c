#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238117766
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p[5], double p_7)
{
  char v_4;
  char v;
  short result;
  v_4 = (char)85;
  v = (char)-72;
  result = (short)((int)p_7 % ((int)(~ (- v)) / ((int)(! (~ v_4)) + 959) + 525));
  v_4 = (char)((int)result * p[0]);
  result = (short)p[0];
  result = (short)((unsigned int)(- (~ (- result))) + (unsigned int)v / (
                                                      3556647177U * (unsigned int)(
                                                      (int)v_4 + -68) + 778U));
  return result;
}


