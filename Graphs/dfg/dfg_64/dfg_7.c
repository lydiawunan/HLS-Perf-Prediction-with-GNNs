#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988261325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned long long p_4, unsigned long long p_7,
                   double p_11)
{
  int v_15;
  long v_13;
  long long v_9;
  unsigned int v;
  unsigned short result;
  v_15 = -164;
  v_13 = (long)p_4;
  v_9 = 22208LL;
  result = (unsigned short)15169;
  v = (unsigned int)(14545LL - ~ ((-31710LL * v_9) * (long long)(v_13 * (long)v_15)));
  v_9 = (long long)((unsigned int)p_11 / (v + 60U));
  v = (unsigned int)((float)p_7 - ((float)(-51202LL / (v_9 + 19LL)) - -907497024.f));
  result = (unsigned short)(~ ((unsigned long long)(~ p % (long)((int)result + 978)) / (
                               (! p_4 | (unsigned long long)v) + 521ULL)));
  return result;
}


