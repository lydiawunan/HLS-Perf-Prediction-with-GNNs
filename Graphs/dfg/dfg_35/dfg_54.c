#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265127602
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, signed char p_9, unsigned int p_11, char p_13)
{
  unsigned short v_15;
  short v_7;
  long long v_5;
  unsigned int v;
  unsigned int result;
  v_15 = (unsigned short)35443;
  v_5 = 133951270LL;
  v_7 = (short)v_15;
  v = (unsigned int)p_13;
  result = (unsigned int)(v_5 + (long long)((unsigned int)v_7 - (((unsigned int)p_9 - p_11) + 3711576683U)));
  result = ! (result & v) + (unsigned int)(p / -34);
  return result;
}


