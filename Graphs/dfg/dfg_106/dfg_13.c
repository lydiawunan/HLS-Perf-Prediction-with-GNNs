#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785855747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p)
{
  unsigned long v_9;
  unsigned int v_7;
  char v_4;
  int v;
  int result;
  v_9 = (unsigned long)p;
  v_7 = (unsigned int)(! v_9);
  v = (int)v_7;
  v_4 = (char)p;
  result = ! v - ~ ((int)v_4 / ((857 - (int)p) + 429));
  return result;
}


