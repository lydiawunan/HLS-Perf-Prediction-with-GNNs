#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585852521
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, float p_7, unsigned long p_9, int p_11[3][3][3])
{
  int v_13;
  float v_4;
  signed char v;
  unsigned char result;
  v_13 = 35310;
  v_4 = (-82.2756118774f - (float)((unsigned long)(~ p_11[1][2][0]) % (
                                   (4294907621UL + p_9) + 321UL))) + (float)(! (~ (- v_13)));
  v = (signed char)p_9;
  v_4 = - v_4;
  result = (unsigned char)(- (((float)v + v_4) * (float)(26893UL % ((unsigned long)p + 313UL)) + 
                              (float)(-63 - (int)((char)p)) * - p_7));
  return result;
}


