#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 10716652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[4][4][4], double p_7)
{
  short v_5;
  int v;
  int result;
  v_5 = (short)p_7;
  v = - (((int)p[3][1][1] + (int)v_5) % ((int)(- v_5) + 530));
  result = (int)(953041344.f + (7634647040.f + (float)(((int)p[0][3][3] % (
                                                        v + 367)) * (int)6369985024.f)));
  return result;
}


