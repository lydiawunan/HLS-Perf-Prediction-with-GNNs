#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736898039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(void)
{
  unsigned long long v_6;
  unsigned short v_4;
  unsigned char v;
  unsigned long result;
  v_6 = 18446744073709550554ULL;
  v_4 = (unsigned short)571;
  v = (unsigned char)(~ ((unsigned long long)((int)v_4 / 125) + ~ v_6));
  result = (unsigned long)(! (- ((int)v * 53)));
  return result;
}


