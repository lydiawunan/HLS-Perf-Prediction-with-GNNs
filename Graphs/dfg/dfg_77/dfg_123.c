#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92684066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, unsigned short p_5, unsigned char p_11)
{
  signed char v_9;
  char v_7;
  double v;
  long long result;
  v_9 = (signed char)p_5;
  v_9 = (signed char)((long long)p_11 / (((long long)((int)v_9 + 60) - -654870423LL) / (long long)(
                                         ((long)v_9 / 894047817L - (long)p_11) + 740L) + 472LL));
  v_7 = (char)v_9;
  v = (double)(0ULL / (unsigned long long)((((int)p_5 - 117) & ~ (-107 >> (
                                                                  (int)v_7 & 7))) + 10));
  result = (long long)(519.581542969 - v) + (long long)(- p);
  return result;
}


