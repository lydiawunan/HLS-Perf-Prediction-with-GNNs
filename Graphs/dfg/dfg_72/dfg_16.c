#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 535382484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, short p_9, unsigned long p_11, signed char p_13,
              unsigned long long p_15)
{
  short v_19;
  unsigned int v_17;
  unsigned int v_6;
  signed char v_4;
  unsigned int v;
  long long result;
  v_19 = (short)20031;
  v_17 = (unsigned int)p_13;
  result = 29858LL;
  v = (unsigned int)(! (- (p_15 - 18446744073085424468ULL)) * (unsigned long long)(~ (
                     (int)((short)((double)p_11 * 607.320255087)) % (
                     (int)v_19 + 417))));
  v_6 = (unsigned int)(0ULL - (unsigned long long)((unsigned long)(v_17 % 4294967190U << (
                                                                   (int)v_19 & 31)) - p_11));
  v_4 = (signed char)((unsigned long)v_6 + (((unsigned long)(p - (int)p_9) + ~ p_11) + (unsigned long)(~ p_13)));
  result = ! (- (! result)) * ((long long)v / ((long long)v_4 * result + 476LL) + result);
  return result;
}


