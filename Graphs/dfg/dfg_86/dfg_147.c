#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 804674711
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, long p_7[3][3][3], unsigned char p_11[1][5][1])
{
  unsigned short v_9;
  int v_5;
  unsigned int v;
  short result;
  v_9 = (unsigned short)50017;
  v_5 = (int)p;
  v = (unsigned int)p_7[0][0][2];
  v_9 = (unsigned short)((unsigned int)v_9 / (~ (3602133845U * ! v) + 231U));
  v = (unsigned int)((int)((double)((long)((int)p % (v_5 + 147)) / (p_7[2][0][1] % (long)(
                                                                    (int)v_9 + 739) + 28L)) + 2.08113159222e+38) / (
                     ! ((int)(- p_11[0][4][0]) | (int)p_11[0][1][0]) + 134));
  result = (short)((unsigned int)(! ((int)((char)-240.118586272) - -108)) % (
                   ! v + 495U) - (unsigned int)(! p));
  return result;
}


