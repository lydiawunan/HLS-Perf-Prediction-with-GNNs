#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 170260142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, unsigned short p_9)
{
  int v_7;
  char v_4;
  signed char v;
  unsigned long long result;
  v_7 = 58693;
  result = (unsigned long long)(v_7 + (int)p_9);
  v_4 = (char)(48849ULL | ~ (result << ((p + p) & 63)));
  v = (signed char)v_4;
  result = (unsigned long long)(-107 << (((int)v + 44285) & 7));
  return result;
}


