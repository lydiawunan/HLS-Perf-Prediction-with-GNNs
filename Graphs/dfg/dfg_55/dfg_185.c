#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 354343380
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned long p_5, signed char p_11,
         unsigned long long p_13)
{
  long v_17;
  unsigned int v_15;
  unsigned long v_9;
  char v_7;
  int v;
  char result;
  v_17 = -20167L;
  v_9 = (unsigned long)p_11;
  result = (char)59;
  v_15 = (unsigned int)(((unsigned long long)result & ((unsigned long long)v_9 * 18446744073709543467ULL) % (unsigned long long)(
                                                      (p_5 & (unsigned long)p_11) + 1015UL)) * 18446744073313973092ULL);
  v_7 = (char)((unsigned long long)(((unsigned long)(~ v_15) / (unsigned long)(
                                     v_17 + 965L)) / 9385UL));
  v = (int)(~ (- (p_5 * (unsigned long)v_7)));
  result = (char)(- ((int)7558121083.02 + v / -18604) * ! (0 % ((59178 ^ (int)p) + 255)));
  return result;
}


