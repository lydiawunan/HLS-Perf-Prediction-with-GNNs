#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12089706
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, short p_7, int p_9)
{
  unsigned char v_5;
  long long v;
  float result;
  v_5 = (unsigned char)(~ ((int)(~ (~ p_7)) + p_9));
  v_5 = v_5;
  v = (long long)(- ((int)p + ((37128 & (int)v_5) + -732510775 * (int)p)));
  result = (float)v;
  return result;
}


