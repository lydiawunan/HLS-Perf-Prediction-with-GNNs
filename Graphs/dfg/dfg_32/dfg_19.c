#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 923235840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned char p_9, unsigned char p_11)
{
  long v_13;
  float v_7;
  short v_5;
  unsigned char v;
  short result;
  v_13 = 17677L;
  v_7 = 66569556.f;
  v_5 = (short)((double)v_7 * ((double)p_9 * ((double)p_11 / -1.73611315287e+38)) - (double)v_13);
  v = (unsigned char)((int)v_5 + 39);
  result = (short)((int)(- v) - (35839 - (int)p));
  result = result;
  return result;
}


