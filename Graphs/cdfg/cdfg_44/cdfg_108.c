#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 346698998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_4, float p_6, long long p_11)
{
  long long v_13;
  long v_9;
  int v;
  long long result;
  v_9 = (long)p_11;
  v = 219407877;
  result = (long long)(~ (- (signed char)-103));
  while (result <= (long long)(((long)p * p_4 & (long)p_6) - 18747L)) {
    v_9 = (unsigned long long)v_9 / ((unsigned long long)v * 839997855ULL + 476ULL);
    v_13 = (long long)-421.133308631;
    v = (int)(v_13 % 1LL);
    result = 415LL - - (- p_11);
  }
  while_0_break: ;
  return result;
}


