#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345876084
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned short p_11[2],
                       signed char p_13)
{
  long v_15;
  unsigned int v_8;
  long long v_6;
  int v_4;
  unsigned long long v;
  unsigned long long result;
  v_15 = 7136738L;
  v_8 = (unsigned int)p;
  v_6 = (long long)((((int)(! p) - (int)p_11[1] / ((int)p_13 + 488)) << (
                     v_15 & 31L)) / 781);
  v_4 = (int)(~ (- (- (v_6 & (long long)v_8))));
  v = (unsigned long long)v_4;
  result = v;
  return result;
}


