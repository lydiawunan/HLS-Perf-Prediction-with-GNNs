#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 537825273
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, char p_5, long long p_7, unsigned int p_13)
{
  double v_15;
  double v_11;
  unsigned char v_9;
  unsigned int v;
  long result;
  v_11 = 1.85100504386e+38;
  v_9 = (unsigned char)p_5;
  v = (unsigned int)p_5;
  v_15 = (double)(- ((unsigned int)((int)((unsigned char)v_11)) + ! (
                     4294913435U ^ p_13)));
  v_11 = (double)980423878U;
  v = (v >> 2UL) % (unsigned int)(- ((int)v_9 * (int)((unsigned char)v_11)) + 134) ^ ~ (
      (unsigned int)(-64967 + (int)v_9) % (p_13 % ((unsigned int)v_15 + 259U) + 684U));
  result = (long)((long long)((p & 118549378) % -31) + ((long long)(v & (unsigned int)p_5) % (
                                                        p_7 + 365LL) | -4073LL));
  return result;
}


