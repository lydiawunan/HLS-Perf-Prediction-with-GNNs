#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 640386030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned long long p_5)
{
  unsigned char v_7;
  unsigned char v;
  long result;
  v_7 = (unsigned char)p_5;
  v = (unsigned char)p;
  result = 450592093L;
  result = (long)(- ((int)p + (int)v_7)) - - result;
  result = (long)(- ((unsigned long long)((long)v + result) ^ ((unsigned long long)p + p_5)));
  return result;
}


