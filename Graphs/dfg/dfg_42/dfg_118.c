#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 271457961
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, double p_11, char p_13, unsigned long p_17)
{
  unsigned int v_15;
  unsigned long long v_8;
  short v_6;
  long long v_4;
  long v;
  unsigned char result;
  v_15 = (unsigned int)p_13;
  v_8 = 18446744073699586359ULL;
  v_6 = (short)p_13;
  result = (unsigned char)(! p_17);
  v_4 = (long long)p;
  v = (long)((double)(! (! (v_8 % (unsigned long long)((int)p + 435)))) / (
             ((double)v_8 * (p_11 * p_11) - (double)((unsigned int)(~ p_13) / (
                                                     - v_15 + 83U))) + 1012.));
  result = (unsigned char)(~ ((long long)v + ! v_4 % (long long)(((int)v_6 + (int)result) + 359)));
  return result;
}


