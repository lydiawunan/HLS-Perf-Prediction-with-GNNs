#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279541012
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p[2][1])
{
  int v_7;
  char v_5;
  float v;
  unsigned long long result;
  v_7 = (int)(- (! (unsigned char)143));
  v_5 = (char)v_7;
  v = (float)(~ 0LL);
  result = (unsigned long long)(- ((float)(~ p[0][0]) + - v) - (float)(
                                (unsigned long long)(! p[1][0]) % ((57963ULL | (unsigned long long)v_5) + 174ULL)));
  return result;
}


