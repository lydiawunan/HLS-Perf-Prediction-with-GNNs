#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 172201275
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  short v_8;
  unsigned long v_6;
  float v_4;
  int v;
  int result;
  v_8 = (short)11049;
  v_6 = 22728UL;
  v_4 = 67.0325164795f;
  v = (int)(- (v_4 * v_4) * (float)(73LL % (long long)((v_6 >> ((int)v_8 & 31)) + 960UL)));
  result = (int)(! ((unsigned long long)v));
  return result;
}


