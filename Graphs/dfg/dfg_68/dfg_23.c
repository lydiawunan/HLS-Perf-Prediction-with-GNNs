#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 418990063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[4][1], unsigned int p_7)
{
  unsigned short v_9;
  short v_4;
  int v;
  unsigned short result;
  v_9 = (unsigned short)4069;
  v = (int)6227256229.46;
  v_4 = (short)665.653320312f;
  v = (int)(((unsigned int)(- p[3][0] | (v >> 29)) % (- p_7 + 561U)) % (unsigned int)(
            (int)v_9 + 716));
  result = (unsigned short)(- ((unsigned long)v & (unsigned long)-1.81102942618e+12f % (
                                                  (unsigned long)v_4 % 32397UL + 585UL)));
  return result;
}


