#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 123982012
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, short p_5, unsigned long p_9[4],
                unsigned long p_17)
{
  int v_19;
  long v_15;
  unsigned long long v_13;
  long v_11;
  long long v_7;
  long v;
  signed char result;
  v_19 = 25009;
  v_13 = 18446744072823586071ULL;
  v_11 = -156329781L;
  v = (long)p;
  result = (signed char)-18;
  v_7 = (long long)v_19;
  while ((~ ((unsigned long long)v % (p + 210ULL)) & 35210901ULL) != (unsigned long long)(
         (long long)((int)(- result) % ((int)(! p_5) + 648)) % ((v_7 - 704004271LL) / (long long)(
                                                                p_9[0] * (unsigned long)v_11 + 222UL) + 588LL))) {
    v_15 = v_13 / 18446744073709542360ULL;
    v_11 = (long)((unsigned long)(((long)p_5 / (v + 372L)) % 13L) / (
                  p_17 + 622UL));
    v_15 = - (v_15 * v) * (long)result;
    v = (long)((unsigned long)v_15 * p_9[2]);
  }
  while_0_break: ;
  return result;
}


