#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895379789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p)
{
  long v_6;
  int v_4;
  int v;
  short result;
  v_6 = -59342L;
  v_4 = (int)(-20778L / (~ (! (v_6 / (long)((int)p + 979))) + 499L));
  result = (short)v_4;
  v = (int)result;
  result = (short)v;
  return result;
}


