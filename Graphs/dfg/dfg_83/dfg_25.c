#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221160232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, long p_11, unsigned char p_13)
{
  unsigned long long v_9;
  char v_6;
  signed char v_4;
  long v;
  int result;
  v_6 = (char)53;
  v_4 = (signed char)50;
  v_9 = (unsigned long long)p_13;
  v_4 = (signed char)(-586.839172363f + (float)((unsigned long long)(
                                                (long)((int)v_6 + (int)v_4) / (
                                                p + 698L)) * ((18446744073709533391ULL * v_9) / (unsigned long long)(
                                                              (51L ^ p_11) + 415L))));
  v = (long)(- (25 % ((int)v_4 + 815)));
  result = (int)(~ v);
  return result;
}


