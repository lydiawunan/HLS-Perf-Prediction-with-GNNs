#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 861441462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p[5][4])
{
  char v_6;
  unsigned long long v_4;
  unsigned short v;
  signed char result;
  v = (unsigned short)28251;
  v = ! v;
  v_6 = (char)p[3][0];
  v_4 = (unsigned long long)v_6;
  result = (signed char)(~ (18446744073709548089ULL * ((unsigned long long)v / (
                                                       v_4 + 882ULL))) - 18446744072922176262ULL);
  return result;
}


