#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1039005489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, int p_5[3][3], int p_9)
{
  long long v_7;
  signed char v;
  unsigned long long result;
  v_7 = -147460705LL;
  v = (signed char)p_9;
  result = (unsigned long long)((long long)((int)6760599552.f % (p_5[2][1] + 189)) / (
                                (v_7 - (long long)p_9) + 738LL) + v_7);
  result = ~ ((result % (unsigned long long)(p + 922UL)) / (unsigned long long)(
              ((int)v + (int)((signed char)824.207252948)) + 129));
  return result;
}


