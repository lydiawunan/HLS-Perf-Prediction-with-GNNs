#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 568119888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, double p_5, float p_7)
{
  short v;
  int result;
  v = (short)(~ (209 - (int)((unsigned char)(- (- p_7)))));
  result = (int)p_5;
  result = (int)((float)(! v) / (- (- p) + 574.f) + - (- p / ((float)(
                                                              result % (
                                                              (int)p + 569)) + 450.f)));
  return result;
}


