#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261654950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned long long p_7, int p_9)
{
  signed char v_5;
  int v;
  unsigned long result;
  v_5 = (signed char)p_9;
  v = -690937504;
  v = (int)(~ ((130ULL % ((471415904ULL + p_7) + 395ULL)) / (unsigned long long)(
               (11687UL + (unsigned long)v) + 538UL)));
  result = (20059UL * ((unsigned long)p * 220468387UL) + (unsigned long)v) >> (
           (int)v_5 & 31);
  return result;
}


