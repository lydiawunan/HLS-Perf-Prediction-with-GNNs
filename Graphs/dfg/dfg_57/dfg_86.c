#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950725370
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, long long p_5, unsigned long p_7,
                   long long p_17)
{
  char v_15;
  unsigned short v_13;
  long v_11;
  double v_9;
  unsigned short v;
  unsigned short result;
  v_15 = (char)p_7;
  v = (unsigned short)40956;
  v_11 = (long)p_17;
  v_13 = (unsigned short)((int)v_15 + -29218);
  v_9 = (double)(~ ((long)v * v_11 | (long)(! (! v_13))));
  result = (unsigned short)(~ ((long long)((int)v + (int)p) / (- p_5 + 487LL)) % (
                            (long long)(- ((double)(~ p_7) * - v_9)) + 779LL));
  return result;
}


