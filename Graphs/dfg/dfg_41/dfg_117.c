#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124974449
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p[2][3], char p_7)
{
  float v_11;
  unsigned short v_9;
  float v_5;
  unsigned int v;
  signed char result;
  v_9 = (unsigned short)24344;
  v = 4294965903U;
  v_11 = (float)p[0][1];
  v_5 = (float)(! (~ ((int)p[1][0] / ((int)p_7 + 587)) / (((int)((char)(
                                                           (float)v_9 * v_11)) | (int)(~ p_7)) + 962)));
  result = (signed char)(((unsigned long)((int)p[1][1] + (int)p[0][0]) % (
                          39608UL % (unsigned long)(v + 278U) + 255UL) + (unsigned long)(
                          (int)((char)v_5) - (int)(! p_7))) % 4294930807UL);
  result = ! result;
  return result;
}


