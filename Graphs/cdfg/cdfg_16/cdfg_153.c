#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015837063
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, int p_5[1][2], float p_7, long long p_9)
{
  unsigned char v_11;
  float v;
  long long result;
  v_11 = (unsigned char)139;
  v = p_7;
  v = - (p_7 / 5397.f) + (v + (float)p_9) * (float)(! v_11);
  result = (long long)(((int)(v - (float)p) * ! p_5[0][0]) % ((int)((unsigned short)(- p_7)) * 12571 + 763));
  return result;
}


