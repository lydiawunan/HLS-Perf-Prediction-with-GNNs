#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 200275693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p[5], unsigned int p_9[5], int p_11[4][4])
{
  int v_6;
  signed char v_4;
  long v;
  unsigned short result;
  v_6 = p_11[3][1];
  v_4 = (signed char)112;
  result = (unsigned short)p[4];
  v = (long)p[2];
  while ((long)(~ result) != (long)result % (! (! v) + 668L)) {
    v_6 &= (int)v_4 / -3;
    v_4 = (signed char)3171103744.f;
    v = (long)(! p_11[0][0]);
    result = (unsigned short)((unsigned int)((3672305095. + p[1]) * - p[3]) + 
                              - p_9[3] / ((unsigned int)p[3] + 957U));
  }
  while_0_break: ;
  return result;
}


