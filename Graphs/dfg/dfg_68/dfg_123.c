#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 900125371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned int p_9, signed char p_11)
{
  unsigned int v_13;
  long long v_6;
  signed char v_4;
  unsigned int v;
  signed char result;
  v_13 = (unsigned int)p;
  v_6 = (long long)v_13;
  v = (unsigned int)p_11;
  v_4 = (signed char)(- (v_6 / (long long)((unsigned int)p * ! p_9 + 1001U)));
  result = (signed char)(! (- v) * (unsigned int)v_4 - v);
  return result;
}


