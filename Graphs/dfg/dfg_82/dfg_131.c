#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 889163726
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_9)
{
  int v_11;
  float v_6;
  unsigned int v_4;
  unsigned long v;
  long long result;
  v_6 = (float)p_9;
  v_4 = 3928749279U;
  v_11 = (int)(~ (~ (! (~ p_9))));
  v_6 = (float)((int)(- ((double)((unsigned long)p_9 - 4058973933UL) + (
                         -970579276.684 + (double)v_6))) + ~ (- (v_11 & -72)));
  v = (unsigned long)v_4;
  result = ~ ((long long)v % (((long long)(v_4 + 9801U) + ((long long)v_6 + p)) + 524LL));
  return result;
}


