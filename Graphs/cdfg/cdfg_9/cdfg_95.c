#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810521194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  double v_4;
  int v;
  char result;
  v_4 = 631.857662039;
  v = (int)(~ (char)-49);
  result = (char)(v & (int)(v_4 * 1377356.));
  return result;
}


