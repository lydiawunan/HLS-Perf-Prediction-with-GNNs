#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106035796
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned char p_9, unsigned long p_11)
{
  float v_6;
  unsigned long long v_4;
  unsigned char v;
  unsigned long result;
  v_6 = (float)p;
  result = 3321396505UL;
  v = (unsigned char)(~ ((unsigned long)p_9 - ~ p_11));
  v_4 = (unsigned long long)p;
  v_4 = (unsigned long long)(v_6 + (float)v_4);
  result = (unsigned long)((unsigned long long)((unsigned long)v - result) + v_4);
  return result;
}


