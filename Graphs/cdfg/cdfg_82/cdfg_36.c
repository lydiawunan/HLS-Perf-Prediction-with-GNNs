#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503089030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned long p_7, signed char p_9)
{
  char v_11;
  unsigned short v_5;
  unsigned char v;
  int result;
  v_11 = (char)p_7;
  v_5 = (unsigned short)42224;
  v = (unsigned char)p;
  v_5 = (unsigned short)(~ ((int)(! p_9) & ((int)v_11 + (int)v_5)));
  result = (int)((unsigned long)((p << ((int)v & 31)) % (unsigned int)(
                                 (int)(~ v_5) + 504)) - p_7);
  return result;
}


