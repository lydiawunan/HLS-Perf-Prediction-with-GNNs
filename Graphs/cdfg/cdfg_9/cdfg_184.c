#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 369566924
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(void)
{
  double v_8;
  long v_6;
  float v_4;
  double v;
  unsigned short result;
  v_8 = -2.2627120114e+37;
  v_6 = -674694370L;
  v_4 = -757.524353027f;
  v = v_8;
  result = (unsigned short)(((v + (double)v_4) + 50843.) + (double)v_6);
  return result;
}


