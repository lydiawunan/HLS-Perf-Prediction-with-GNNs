#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 708860039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, long long p_7, unsigned int p_11)
{
  long long v_13;
  long v_9;
  signed char v_4;
  double v;
  unsigned long result;
  v_13 = 102654231LL;
  v_9 = (long)v_13;
  v_4 = (signed char)((long long)p + ~ ((-43LL / (p_7 + 235LL)) * (long long)(
                                        v_9 >> (p_11 & 31U))));
  v = (double)v_4;
  result = (unsigned long)(4294913707U + (unsigned int)v);
  return result;
}


