#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757888084
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, int p_9)
{
  long v_7;
  float v_5;
  unsigned long long v;
  unsigned long long result;
  v_7 = (long)p_9;
  result = (unsigned long long)-2924489984.f;
  v_5 = (float)(4067555613UL * (unsigned long)(! (((int)p | p_9) / (~ p_9 + 686))));
  v = (unsigned long long)(- (v_5 / ((float)v_7 + 613.f)));
  result = (v + result) * 10696ULL - (unsigned long long)((int)(! (~ p)) ^ -65);
  return result;
}


