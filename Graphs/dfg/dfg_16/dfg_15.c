#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 990256052
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned char p_9, char p_13)
{
  unsigned char v_11;
  int v_7;
  unsigned char v_4;
  long v;
  int result;
  v_11 = p;
  v_7 = (int)p;
  v_4 = p;
  v = (long)(((int)p_9 / ((((int)v_11 + v_7) - (int)p % ((int)p_13 + 249)) + 520)) % -36);
  result = (int)((((v / 6L) % (long)((int)v_4 + 717)) * (long)p) / (long)(
                 v_7 + 372));
  result = ~ result;
  result = result;
  return result;
}


