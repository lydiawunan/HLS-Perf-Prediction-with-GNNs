#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 521226101
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, signed char p_7, signed char p_9[3][4])
{
  int v_5;
  double v;
  signed char result;
  v_5 = 489586234;
  v = (double)p;
  result = (signed char)(((double)(! v_5) + - v) + (double)((int)(- p_7) % (
                                                            (int)p_9[2][0] + 613)));
  result = (signed char)((unsigned int)(! result) % (p % 65294U + 744U) ^ (unsigned int)v);
  return result;
}


