#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30274625
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[5], float p_7)
{
  int v_9;
  unsigned short v_5;
  long v;
  unsigned int result;
  result = 4294916307U;
  v_9 = 635585118;
  v_5 = (unsigned short)16043;
  v = (long)(~ (! p[4] * (unsigned long)(68 / ((int)((char)p_7) + 455))) * (unsigned long)v_9);
  result = (unsigned int)((unsigned long long)(- (-546267437LL * (long long)result) - (long long)p[4]) * ~ (
                          (unsigned long long)(v + (long)v_5) % 18446744073277125387ULL));
  return result;
}


