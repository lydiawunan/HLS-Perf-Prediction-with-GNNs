#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340910832
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  unsigned int v_8;
  unsigned short v_6;
  float v_4;
  char v;
  int result;
  v_8 = 4294941656U;
  v = (char)71;
  v_4 = (float)(unsigned char)190;
  v_6 = (unsigned short)51478;
  result = (int)(! ((unsigned int)((int)((unsigned short)((float)v * v_4)) % (
                                   (int)(~ v_6) + 876)) ^ ! (- v_8)));
  return result;
}


