#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 765922879
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned long long p_7[1][1][4],
          unsigned short p_9)
{
  unsigned int v_5;
  unsigned int v;
  float result;
  v_5 = 12688U;
  v = (unsigned int)((int)(~ p_9) % 104);
  result = (float)((double)((v << ((int)p & 31)) + (v_5 ^ (unsigned int)p)) - - (
                   (double)p_7[0][0][1] - 2.74310202597e+38));
  return result;
}


