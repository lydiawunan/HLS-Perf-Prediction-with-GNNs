#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 849651137
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, float p_9)
{
  unsigned long long v_11;
  long v_7;
  unsigned char v_4;
  long v;
  unsigned short result;
  v_11 = 18446744073709510503ULL;
  v_7 = (long)(v_11 ^ v_11);
  if (54341L - v_7 == (long)p_9) {
    v_4 = (unsigned char)p;
    v = (long)v_4;
    result = (unsigned short)v;
  }
  else result = (unsigned short)1081431296.f;
  return result;
}


