#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1030168872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned int p_11[3][4][2])
{
  unsigned char v_8;
  long long v_6;
  unsigned int v_4;
  unsigned long v;
  char result;
  v_4 = 4294936224U;
  v_8 = (unsigned char)p_11[1][1][0];
  v_6 = (long long)((long)(~ ((int)v_8 - (int)(! v_8))) / (! (! ((long)p / -30130L)) + 807L));
  v = (unsigned long)((long long)v_4 * (-1LL * - (v_6 - (long long)v_4)));
  result = (char)(~ v);
  return result;
}


