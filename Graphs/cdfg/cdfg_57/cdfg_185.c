#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895021758
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, char p_7, unsigned int p_9)
{
  long long v_11;
  signed char v_4;
  unsigned long v;
  unsigned long long result;
  v_11 = (long long)p;
  v = (unsigned long)p_7;
  v_4 = (signed char)((long long)p_7 / (~ ((long long)p_9 + v_11) + 252LL));
  result = (unsigned long long)((! v % (unsigned long)((26458 - (int)v_4) + 364)) / (unsigned long)(
                                (84 / ((int)p + 908) + 28) + 298));
  return result;
}


