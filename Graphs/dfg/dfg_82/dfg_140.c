#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599544373
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, double p_7, char p_9)
{
  unsigned long v_11;
  unsigned char v_5;
  unsigned short v;
  char result;
  v_11 = (unsigned long)p_9;
  v_5 = (unsigned char)v_11;
  v = (unsigned short)((p * 25760U + (unsigned int)((int)v_5 * ((int)((char)p_7) % (
                                                                (int)p_9 + 82)))) * (unsigned int)p_9);
  result = (char)((int)v + -3235);
  return result;
}


