#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377557709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p)
{
  unsigned int v_8;
  long v_6;
  int v_4;
  unsigned long long v;
  char result;
  v_4 = (int)p;
  v = 35826ULL;
  v_8 = (unsigned int)(~ p);
  result = (char)75;
  v_6 = (long)((unsigned long long)p / (((v / 18446744072699497885ULL) * 18446744073709551528ULL + (unsigned long long)(
                                         (int)(! result) << (! p & 7L))) + 771ULL));
  result = (char)(- (! (v | (unsigned long long)v_4)) + (unsigned long long)(~ (
                  (unsigned long)3.02999992037e+38f * ((unsigned long)v_6 - (unsigned long)v_8))));
  return result;
}


