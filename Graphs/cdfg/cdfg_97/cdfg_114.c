#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 25596742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned long p_4)
{
  char v_9;
  unsigned long v_7;
  unsigned short v;
  short result;
  v_9 = (char)p_4;
  v_7 = (unsigned long)p;
  v = (unsigned short)(~ (~ (v_7 + (unsigned long)v_9)));
  result = (short)(18UL + ((unsigned long)p * p_4 - (unsigned long)((int)v * 13)));
  return result;
}


