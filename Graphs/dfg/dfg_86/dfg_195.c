#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475987023
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, double p_7, int p_9[1], int p_13, float p_15)
{
  char v_11;
  float v_4;
  unsigned int v;
  unsigned char result;
  v_4 = (float)p;
  v_11 = (char)(- p_15);
  v = (unsigned int)(~ (- (- p_13 - 125)));
  result = (unsigned char)((((unsigned int)p_7 + v) + (unsigned int)p_9[0]) * (unsigned int)(
                           (double)v_11 + (p_7 + (double)(23253U + v))));
  result = (unsigned char)((unsigned long)((unsigned int)(217 >> 13U) * v) & (
                           (unsigned long)(v_4 * (float)result) / 531UL + (unsigned long)(
                           0 - (long)p)));
  return result;
}


