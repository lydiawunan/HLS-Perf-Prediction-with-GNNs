#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 607163631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, signed char p_5, signed char p_7)
{
  unsigned int v_9;
  char v;
  double result;
  v_9 = 3325247138U;
  v = (char)(~ ((unsigned long long)((int)p / (-24 / ((int)p_5 + 954) + 288)) | (
                (unsigned long long)p_7 - (454184042ULL + (unsigned long long)v_9))));
  v = (char)(- (2.93418753192e-06 + (double)(! ((int)v - 73))));
  result = (double)(29240UL + (unsigned long)(~ v));
  result = result;
  return result;
}


