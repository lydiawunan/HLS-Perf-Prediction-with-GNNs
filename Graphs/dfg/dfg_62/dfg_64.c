#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 426957064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long p_5, signed char p_7, unsigned long long p_9,
                 long long p_13)
{
  int v_17;
  unsigned int v_15;
  unsigned long long v_11;
  unsigned long v;
  unsigned int result;
  v_17 = (int)p_5;
  result = (unsigned int)p_5;
  v_15 = (unsigned int)(- (- (~ (p_13 + p_13))));
  v_11 = (unsigned long long)((-15LL + (long long)v_15 % (((long long)p_7 - -143203682LL) + 341LL)) * (long long)(- (- (
                              result % (unsigned int)(v_17 + 103)))));
  v = (unsigned long)(p_13 % 317LL);
  result = (unsigned int)((unsigned long long)((long long)(! (v - (unsigned long)p)) + 
                                               (16850LL + (long long)p_5) * (long long)p_7) + 
                          14600ULL / (p_9 % ((v_11 & 18446744073613153315ULL) + 171ULL) + 625ULL));
  return result;
}


