#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005541656
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p[3], char p_7)
{
  char v_4;
  signed char v;
  unsigned int result;
  v_4 = p_7;
  v = (signed char)-78;
  result = (unsigned int)(- (((int)v - (int)v) % ((int)(! v_4) + 469)) / (
                          (int)p[2] + 684));
  return result;
}


