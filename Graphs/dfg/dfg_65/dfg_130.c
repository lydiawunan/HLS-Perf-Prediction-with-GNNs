#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1013603872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long p_11)
{
  unsigned char v_9;
  long long v_7;
  char v_4;
  unsigned int v;
  long result;
  v_9 = (unsigned char)p_11;
  v_7 = (long long)((unsigned long)v_9 + (p_11 - 20162UL));
  v_4 = (char)(- (-4.41075768597e+37 - (double)(v_7 % 3228758028LL)) + -46360.);
  v = (unsigned int)((unsigned long long)(- v_4) - (18446744072641423053ULL - (unsigned long long)(~ p)));
  result = (long)v;
  return result;
}


