#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 699275527
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned char p_7, int p_11[1][5][5],
                 unsigned int p_13[4][4], unsigned long p_15)
{
  double v_9;
  unsigned short v_5;
  signed char v;
  unsigned int result;
  result = 4294951824U;
  v_9 = (double)((unsigned long)p_11[0][3][2] + (unsigned long)(~ result) * (
                                                18987UL % (926164512UL * p_15 + 296UL)));
  v_5 = (unsigned short)result;
  v = (signed char)(((unsigned long)(result | (unsigned int)v_5) % (unsigned long)(
                     ((long)p_7 + -1010618479L) + 832L)) * (unsigned long)(
                    (v_9 * 4294929992.) / ((v_9 + 2412.) + 3.)) - ! (
                    ((unsigned long)p_7 + 4084952694UL) - (unsigned long)(
                    (unsigned int)p_11[0][0][4] * p_13[2][2])));
  result = (unsigned int)(~ (((int)((signed char)p) % ((int)v + 359)) * (int)v));
  return result;
}


