#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 961803989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long long p_9, char p_11[4])
{
  unsigned long long v_7;
  unsigned int v_5;
  char v;
  long result;
  v_7 = p_9;
  v = (char)((unsigned int)p_11[3] % 35696U);
  v_5 = (unsigned int)v;
  v = (char)(- ((unsigned long long)v_5 / (v_7 + 961ULL)) * p_9 | 18446744073709547906ULL);
  result = (long)(~ (461007407ULL / (unsigned long long)((int)v % ((int)p + 232) + 143)));
  return result;
}


