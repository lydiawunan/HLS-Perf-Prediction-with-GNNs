#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 179982308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, long p_4[2], double p_11, unsigned int p_13,
                  char p_15[3][4][3])
{
  int v_9;
  char v_7;
  int v;
  unsigned char result;
  v_9 = (int)(~ (! (~ (unsigned short)61445)));
  v_7 = (char)((int)((char)(((double)(v_9 + v_9) * (p_11 - p_11)) / (
                            (double)(p_13 | 209U) + 239.))) | (int)p_15[2][0][1]);
  v = (int)v_7;
  result = (unsigned char)(~ (((long)p + p_4[1]) / 338L));
  return result;
}


