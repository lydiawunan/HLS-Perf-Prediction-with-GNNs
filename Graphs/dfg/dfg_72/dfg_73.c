#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016182728
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned int p_4)
{
  short v_9;
  long v_7;
  unsigned char v;
  unsigned int result;
  v_9 = (short)-32199;
  result = 4294922483U;
  v_7 = (long)v_9;
  v = (unsigned char)(! (v_7 - -1947L));
  result = (unsigned int)p + - ((result * p_4) * ((unsigned int)v / (
                                                  result + 241U)));
  return result;
}


