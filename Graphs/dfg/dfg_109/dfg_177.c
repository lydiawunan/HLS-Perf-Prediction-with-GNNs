#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 207440656
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, short p_9)
{
  signed char v_7;
  short v_5;
  long v;
  unsigned long result;
  v_5 = (short)(217760069ULL / (unsigned long long)((int)p + 349));
  v_7 = (signed char)((int)(! (! p)) % (((int)(~ p) / 65069 - (int)(- (! p_9))) + 478));
  v = (long)v_7;
  result = (unsigned long)((unsigned long long)p * - (0ULL / (unsigned long long)(
                                                      v * (long)v_5 + 641L)));
  return result;
}


