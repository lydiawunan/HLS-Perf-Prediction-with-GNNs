#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 948220613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, long long p_11)
{
  float v_13;
  unsigned short v_9;
  int v_7;
  int v_5;
  unsigned int v;
  char result;
  v_13 = -486.411560059f;
  v_9 = (unsigned short)p;
  v_7 = -943592043;
  v_5 = (int)p;
  result = (char)(~ (-29439 - (int)v_9 * (int)((unsigned short)v_13)));
  v_9 = (unsigned short)((p + ((unsigned long long)(! result) + - p)) - (unsigned long long)p_11);
  v = (unsigned int)v_9;
  result = (char)(((unsigned long long)v * p - 64818ULL) / (unsigned long long)(
                  ~ (49116 + v_5) + 417) - (unsigned long long)v_7);
  return result;
}


