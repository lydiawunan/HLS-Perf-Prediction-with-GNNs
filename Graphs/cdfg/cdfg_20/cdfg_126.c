#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1037838666
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(void)
{
  unsigned short v_4;
  double v;
  signed char result;
  v_4 = (unsigned short)12139;
  result = (signed char)-107;
  v = 689.562119633;
  result = (signed char)(((double)(~ result) + - v) - (double)(~ (8564 % (
                                                                  (int)v_4 + 337))));
  return result;
}


