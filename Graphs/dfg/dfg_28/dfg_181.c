#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 667354337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, int p_7[1][4], double p_9)
{
  long long v_13;
  int v_11;
  int v_5;
  char v;
  unsigned short result;
  v_13 = (long long)p;
  v_11 = (int)(! (- v_13));
  v_5 = - v_11;
  v = (char)p_9;
  result = (unsigned short)(959514902L - (long)(((int)((char)356405632.f) | (int)v) - 
                                                (p + v_5) % (p_7[0][1] + 477)));
  return result;
}


