#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774664
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, long long p_7, signed char p_11)
{
  char v_15;
  char v_13;
  float v_9;
  float v_5;
  unsigned long long v;
  float result;
  v_15 = (char)p;
  v_9 = -2.63781701721e+38f;
  v = (unsigned long long)p;
  if (1LL <= (long long)(36759822UL - (unsigned long)((v_9 - (float)v_15) / (
                                                      (float)(v + (unsigned long long)p) + 701.f)))) {
    result = - v_9;
    v_5 = (float)(signed char)-2;
    v = (unsigned long long)(- ((double)v_5 / -779.277694405) / ((double)(~ (~ p_7)) + 808.));
  }
  else {
    v_13 = (char)(- 5.47381011205e+37f);
    v_5 = (float)(59403UL + (unsigned long)v_13 * 1027UL);
    result = (float)(- ((unsigned long long)v_5 + (unsigned long long)p_11 * v));
  }
  result = (float)((~ v >> (- p & 63U)) & (unsigned long long)(! ((unsigned int)result + p)));
  return result;
}


