#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391909200
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p[5], unsigned char p_13)
{
  long long v_15;
  int v_11;
  double v_9;
  unsigned long long v_7;
  unsigned char v_4;
  unsigned long v;
  unsigned short result;
  v_15 = -52330LL;
  v_11 = (int)p[1];
  v_9 = (double)p_13;
  v = (unsigned long)p[4];
  v = ! v;
  v_7 = (unsigned long long)((long long)p_13 * v_15);
  v_4 = (unsigned char)(! (v_7 + (unsigned long long)v_9) * (unsigned long long)v_11 + (unsigned long long)p[0]);
  result = (unsigned short)(- ((float)((v * (unsigned long)v_4) / 3373078322UL) * p[2]));
  return result;
}


