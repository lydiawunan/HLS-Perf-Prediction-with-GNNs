#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 479454418
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p)
{
  int v_8;
  unsigned long v_6;
  unsigned long v_4;
  signed char v;
  unsigned char result;
  v_8 = 685558566;
  result = (unsigned char)p;
  v_6 = (unsigned long)result;
  v_4 = (unsigned long)(- (~ ((unsigned long long)v_8 * p + 85545893ULL)));
  v = (signed char)(v_4 % (- v_6 + 138UL));
  result = (unsigned char)v;
  return result;
}


