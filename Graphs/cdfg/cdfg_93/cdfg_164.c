#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113499259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, int p_7, unsigned long p_9[1], double p_11)
{
  unsigned long v_17;
  long v_15;
  char v_13;
  long v_5;
  unsigned int v;
  int result;
  v_17 = 4294924070UL;
  v_13 = (char)114;
  v_5 = (long)p_9[0];
  v_15 = (long)(- v_17);
  if (v_15 / ((long)p_11 + 478L) < (long)v_13) result = -23848;
  else {
    v_5 = (long)p + (v_5 | (long)p_11) * ((long)v_13 * v_15);
    v = (unsigned int)(- ((unsigned long)v_5 / (((unsigned long)p_7 + p_9[0]) + 947UL)));
    result = (int)(((unsigned int)(-62486 & (int)p) - v / 4294945945U) - ! v);
  }
  return result;
}


