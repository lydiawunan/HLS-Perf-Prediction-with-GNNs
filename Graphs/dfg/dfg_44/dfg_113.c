#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502590303
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned long long p_5)
{
  unsigned short v_9;
  char v_7;
  float v;
  char result;
  v_9 = (unsigned short)7087;
  v_7 = (char)(- ((double)v_9 / 8467048691.55));
  v = (float)(~ -184345704LL);
  result = (char)(~ ((int)v_7 * 38883));
  result = (char)(! ((int)((char)(((float)p - v) + (float)p_5)) % ((int)result + 330)));
  return result;
}


