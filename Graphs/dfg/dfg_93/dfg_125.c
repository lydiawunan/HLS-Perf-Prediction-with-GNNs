#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 491661914
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned long p_7, unsigned long p_9, long p_11,
                unsigned long p_13)
{
  unsigned int v_5;
  int v;
  signed char result;
  v = (int)p_7;
  result = (signed char)((- p_9 / 833578685UL + (unsigned long)v) + ! (~ (- p_13)));
  v_5 = (unsigned int)((p_7 / ((13732UL & (unsigned long)result) / (p_9 + 979UL) + 229UL)) / (unsigned long)(
                       p_11 + 325L));
  v = (int)v_5;
  result = (signed char)((float)v + p);
  return result;
}


