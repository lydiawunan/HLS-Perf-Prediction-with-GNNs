#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377898039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, float p_7)
{
  unsigned long long v_11;
  signed char v_9;
  float v_5;
  long v;
  char result;
  v_11 = 18446744072937231442ULL;
  v_9 = (signed char)(! (v_11 >> ((unsigned long long)p_7 & 63ULL)));
  v_5 = 3136445184.f * (float)(4294913417UL * (unsigned long)(! v_9));
  v = (long)(- (- (-62.f * v_5)) + - (- (- p_7)));
  result = (char)(- ((float)(p - (unsigned long)v) + -63214.7578125f) / 194.f);
  return result;
}


