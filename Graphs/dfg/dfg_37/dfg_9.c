#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1043738187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, char p_9, unsigned short p_11)
{
  double v_7;
  unsigned long v_5;
  float v;
  unsigned char result;
  v_5 = (unsigned long)p_9;
  v_7 = (double)p_11;
  v_7 = - (- (418.039123535 + (v_7 - 391081182.)));
  v = (float)(! p_9);
  result = (unsigned char)(! (~ (3147 + (int)((short)v)) + (int)((double)(
                                                                 (float)p - v) / (
                                                                 ((double)v_5 + v_7) + 495.))));
  return result;
}


