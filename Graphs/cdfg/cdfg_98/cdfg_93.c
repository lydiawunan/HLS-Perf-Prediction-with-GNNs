#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818072572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned int p_4, unsigned int p_6, int p_8, int p_10)
{
  float v_13;
  long long v;
  long result;
  v_13 = 6272219136.f;
  v_13 = 1.f + (130378688.f * v_13 - -639722.f);
  if ((unsigned int)(0 / ((int)((short)(- v_13)) + 623)) != p_6) result = 48304L;
  else {
    v = (long long)(~ p_4);
    result = (long)((double)(((unsigned int)p + p_4) % (p_6 + 193U)) - (
                    (double)(p_8 % (p_10 + 737)) + (double)v / (p + 409.)));
  }
  return result;
}


