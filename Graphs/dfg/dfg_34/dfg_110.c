#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 710042014
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, long p_5, unsigned char p_11, float p_13,
         unsigned int p_15)
{
  unsigned short v_9;
  int v_7;
  long long v;
  char result;
  v_9 = (unsigned short)p_5;
  v = -52712LL;
  v_7 = (int)p_15;
  v = (long long)(- ((float)(! (v & 4871LL)) + - ((float)p_11 / (p_13 + 426.f))));
  result = (char)(~ ((long long)p_5 / ((v & (long long)v_7) % (long long)(
                                       ((int)v_9 & 19896) + 251) + 478LL)));
  result = (char)(v + (long long)(((long)(~ p) - p_5) | (long)result));
  return result;
}


