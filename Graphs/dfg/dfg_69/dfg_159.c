#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585771383
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[4][4][5])
{
  int v_9;
  unsigned long long v_6;
  unsigned char v_4;
  unsigned long v;
  unsigned long long result;
  v_9 = 9090;
  v = (unsigned long)(~ (! (~ (- v_9))));
  v_4 = (unsigned char)71;
  v_6 = (unsigned long long)p[3][0][3];
  result = ! ((unsigned long long)v % (- ((unsigned long long)v_4 * v_6) + 327ULL));
  return result;
}


