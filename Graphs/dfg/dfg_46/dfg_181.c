#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188120396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long p_5, int p_7,
                  unsigned long long p_9, long p_11)
{
  long v_17;
  long long v_15;
  signed char v_13;
  long long v;
  unsigned long result;
  v_17 = -222855152L;
  v_15 = (long long)(- ((unsigned long)(v_17 - 26122L) * 483787616UL) / (
                     p_5 + 873UL));
  v_13 = (signed char)v_15;
  v = (long long)(~ ((unsigned long long)((long long)p_7 / 561984035LL) - (
                     p_9 - (unsigned long long)p_11)) * (unsigned long long)(
                  ~ ((unsigned long)v_13 - p_5) - (unsigned long)v_13));
  result = (unsigned long)(- (~ v * (long long)(~ p) - (long long)(~ p_5)));
  return result;
}


