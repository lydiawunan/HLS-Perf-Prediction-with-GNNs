#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958448029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[3], signed char p_7)
{
  char v_4;
  unsigned char v;
  unsigned int result;
  result = (unsigned int)(-(unsigned short)26593);
  v_4 = (char)(~ (! (((int)p_7 << 2) ^ (int)9091861504.f)));
  v = (unsigned char)(! (! p[0]));
  result = ~ (- ((result - 231U) | (unsigned int)((int)v + (int)v_4)));
  return result;
}


