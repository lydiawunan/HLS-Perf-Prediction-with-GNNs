#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32429654
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, int p_5, int p_7, int p_11)
{
  float v_9;
  unsigned short v;
  unsigned long long result;
  v_9 = 5412365312.f;
  result = ! (8297871727008795360ULL & (unsigned long long)((int)(v_9 - 58.f) / (
                                                            ! p_11 + 975)));
  result = ~ result * (unsigned long long)p_7;
  v = (unsigned short)p_5;
  result = ! (result - (unsigned long long)((int)v + (int)((unsigned short)(- p))));
  return result;
}


