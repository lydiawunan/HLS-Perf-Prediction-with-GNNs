#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164181789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, char p_5, long p_7, unsigned long p_11[3],
                signed char p_13)
{
  signed char v_15;
  int v_9;
  unsigned long v;
  signed char result;
  v_9 = 563372848;
  v = (unsigned long)p_7;
  result = (signed char)3.18776916614e+38;
  while (- (- v - (unsigned long)(p & (unsigned int)p_5)) > (unsigned long)p_7) {
    v_15 = v_9 % 351;
    result = (signed char)((float)(30 * (int)v_15) + - (-6054499840.f - (float)p_5));
    v_9 = (int)((unsigned long long)(p_11[1] + (unsigned long)p_13) & (
                525742266ULL << ((int)(~ p_13) & 63)));
    v = (unsigned long)(! (! p) >> (v_9 & 31));
  }
  while_0_break: ;
  return result;
}


