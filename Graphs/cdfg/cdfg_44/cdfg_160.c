#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218372126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned int p_4, float p_6)
{
  int v_9;
  float v;
  unsigned long long result;
  v_9 = 380340927;
  v = (float)v_9;
  result = (unsigned long long)((float)(((unsigned int)p ^ p_4) ^ 4294961963U) - 
                                72.f * (p_6 / (v + 493.f)));
  return result;
}


