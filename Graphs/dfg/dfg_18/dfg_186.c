#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 920352005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, short p_5)
{
  unsigned char v_11;
  long v_9;
  char v_7;
  int v;
  long result;
  v_11 = (unsigned char)73;
  v_9 = 27959L;
  v_7 = (char)p;
  result = - (-30L / (v_9 * (long)(~ v_11) + 251L));
  v = (int)v_7;
  result = result;
  result = - (- result * (long)v) << (((int)p - (int)(! (~ p_5))) & 31);
  return result;
}


