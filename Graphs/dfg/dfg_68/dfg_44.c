#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984639201
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, signed char p_7[3], float p_9)
{
  unsigned long long v_11;
  unsigned char v_4;
  unsigned char v;
  long result;
  v_11 = (unsigned long long)p_9;
  v_4 = (unsigned char)(~ ((unsigned long long)p + (unsigned long long)p_7[1] * (
                                                   (unsigned long long)p_9 - v_11)));
  v = v_4;
  result = (long)v;
  return result;
}


