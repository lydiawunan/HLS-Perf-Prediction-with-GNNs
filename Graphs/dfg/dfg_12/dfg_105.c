#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844635161
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned int p_7, signed char p_9)
{
  unsigned short v_11;
  signed char v_5;
  double v;
  char result;
  v_5 = p_9;
  v_11 = (unsigned short)(- p_7);
  result = (char)0;
  v = (double)45835LL;
  result = (char)(! (! ((int)(~ result) >> ((int)((char)(v - 388573893.)) & 7))));
  return result;
}


