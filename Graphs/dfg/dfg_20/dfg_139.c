#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194546241
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, long long p_9, signed char p_11,
                char p_13[3][4][3])
{
  unsigned int v_17;
  unsigned int v_15;
  unsigned int v_7;
  int v_5;
  unsigned short v;
  signed char result;
  v_17 = (unsigned int)p_9;
  v_15 = (unsigned int)p;
  v_5 = (int)((unsigned int)p_13[1][3][1] - (! (36365U | v_15) & - (v_17 / 4160475259U)));
  v_7 = (unsigned int)(- ((long long)p & ((long long)p * p_9 + (long long)p_11)));
  v = (unsigned short)v_7;
  result = (signed char)((unsigned long long)(- (29923UL & (unsigned long)v)) * (
                         (unsigned long long)((long)(-127 * (int)p) % (
                                              ((long)v_5 + 519764546L) + 767L)) / (
                         (71ULL & 18446744073709497962ULL * (unsigned long long)p) + 1011ULL)));
  return result;
}


