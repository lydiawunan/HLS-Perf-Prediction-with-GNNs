#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 189773710
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, signed char p_13)
{
  unsigned int v_11;
  long v_8;
  unsigned long v_6;
  unsigned long v_4;
  long long v;
  char result;
  v_11 = (unsigned int)p_13;
  v_8 = (long)p_13;
  v = 735886472LL;
  v_4 = (unsigned long)(- (- ((long long)v_11 & v) * (long long)((int)p_13 ^ 37)));
  v_6 = - (~ (~ v_4 & (unsigned long)p));
  v_4 = (unsigned long)v_8;
  result = (char)(~ (v & (long long)(! (v_4 / (v_6 + 277UL)))));
  return result;
}


