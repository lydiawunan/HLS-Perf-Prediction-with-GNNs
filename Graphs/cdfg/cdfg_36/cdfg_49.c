#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 492494341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, double p_5)
{
  unsigned short v_11;
  int v_9;
  unsigned int v_7;
  char v;
  unsigned char result;
  v_11 = (unsigned short)14179;
  v_9 = -37566;
  v_7 = 3827434049U;
  v = (char)(- (v_9 << ((int)v_11 & 31)) * (72 % ((int)((signed char)(
                                                  p_5 * 12.)) + 48)));
  result = (unsigned char)((double)v - (double)(- p) / ((p_5 + (double)v_7) + 702.));
  return result;
}


