#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1039704566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[1], long p_9)
{
  unsigned char v_6;
  float v_4;
  short v;
  int result;
  v_6 = (unsigned char)p[0];
  v = (short)(- (~ p_9));
  result = 15230;
  v_4 = (float)((- (~ result) >> (((int)(- v) + (int)(~ v_6)) & 31)) >> (
                (int)p[0] & 31));
  result = (int)v % (- ((int)((char)(- v_4)) + -73) + 990);
  return result;
}


