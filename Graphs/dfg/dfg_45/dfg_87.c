#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402380445
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p[4][2], signed char p_4, short p_9[4][5])
{
  float v_15;
  signed char v_13;
  unsigned int v_11;
  int v_7;
  unsigned char v;
  long result;
  v_15 = (float)p_4;
  v_13 = (signed char)p_9[1][1];
  v_11 = (unsigned int)p_9[0][3];
  v_7 = (int)((float)((unsigned long)(53765L >> (~ p[0][0] & 31LL)) - (unsigned long)(
                      (unsigned int)p_9[0][0] % (v_11 + 893U) + (unsigned int)(
                      (int)v_13 / ((int)p_4 + 726)))) + v_15);
  v_7 = (int)(-12769093L + (long)v_7);
  v = (unsigned char)(- v_7);
  result = (long)(~ (- p[2][0] + (long long)p_4) % (~ ((long long)((int)v ^ 51) & ~ p[2][0]) + 156LL));
  return result;
}


