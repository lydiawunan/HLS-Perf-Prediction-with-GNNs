#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047178415
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned long p_7, long p_9[3][5][1])
{
  float v_5;
  long long v;
  long result;
  v = (long long)(~ (! p_9[0][4][0]));
  v_5 = (float)-701299026L;
  v = (long long)(((float)(643505994LL / (((long long)p ^ v) + 704LL)) - - (
                   v_5 - 12482.f)) - (float)(~ (- p_7 % (p_7 + 998UL))));
  result = (long)v;
  return result;
}


