#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 464202995
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p)
{
  unsigned char v_8;
  unsigned int v_6;
  char v_4;
  unsigned int v;
  int result;
  v_8 = (unsigned char)p;
  v_6 = (unsigned int)v_8 - p;
  v_4 = (char)v_6;
  v = (unsigned int)v_4;
  result = (int)(! (- (((unsigned long long)v & 766673396ULL) - 19836ULL)));
  return result;
}


