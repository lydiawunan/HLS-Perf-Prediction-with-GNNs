#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 915413245
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, signed char p_11, char p_13)
{
  signed char v_15;
  int v_9;
  unsigned long long v_7;
  unsigned long long v_4;
  int v;
  long result;
  v_15 = p_11;
  v_7 = (unsigned long long)p_11;
  v_4 = 17359ULL;
  v_9 = (int)((((18446744073709551577ULL + v_4) - (v_7 & 18446744073709533704ULL)) >> (
               (unsigned long long)2.9441816371e+19f & 63ULL)) + (unsigned long long)v_15);
  v = (int)(- (! (v_7 ^ (unsigned long long)v_9) + (unsigned long long)(
               (long)p_11 % 22196L + (long)(64944 + (int)p_13))));
  v_4 = (unsigned long long)p;
  result = (long)(- ((unsigned long long)(- v) + - v_4));
  return result;
}


