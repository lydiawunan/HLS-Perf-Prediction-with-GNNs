#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 411462143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p)
{
  signed char v_11;
  char v_9;
  double v_7;
  unsigned long long v_5;
  long long v;
  char result;
  v_11 = (signed char)64;
  v_9 = (char)p;
  v_7 = (double)p;
  v_5 = 18446744073709490348ULL;
  v = (long long)v_5;
  v_5 = (unsigned long long)(! ((long long)((20368 ^ (int)v_9) + (int)v_11) * v));
  v = (long long)(~ (((unsigned long long)p - - v_5) - (unsigned long long)(- (
                     (double)v_5 - v_7))));
  result = (char)(481.97299721 * ((double)(4294936815UL << (((unsigned long long)v | 18446744073357491868ULL) & 31ULL)) + 8066326640.18));
  return result;
}


