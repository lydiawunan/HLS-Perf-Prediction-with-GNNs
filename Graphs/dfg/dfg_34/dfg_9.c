#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171375305
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p)
{
  unsigned long long v_7;
  char v_5;
  unsigned int v;
  unsigned long result;
  v_7 = 19199ULL;
  v = (unsigned int)(-0ULL);
  v_5 = (char)(~ (- ((unsigned long)(~ p) + (46074UL | (unsigned long)v))));
  v = (unsigned int)(31107LL | (long long)((unsigned long)(527.890561262 * (double)(
                                                           (unsigned int)v_5 - 17378U))));
  result = (unsigned long)((unsigned int)p + v);
  return result;
}


