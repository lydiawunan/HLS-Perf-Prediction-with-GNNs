#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 392609149
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, float p_4, float p_7, double p_9, char p_13)
{
  unsigned long v_11;
  unsigned long long v;
  char result;
  v_11 = (unsigned long)((double)(~ (- (18446744073709511397ULL - (unsigned long long)p_7))) / (
                         p_9 + 440.));
  v = (unsigned long long)((unsigned long)p_7 / (((unsigned long)(- (
                                                  74. * p_9)) >> ((391293625UL % (
                                                                   v_11 + 790UL)) / (unsigned long)(
                                                                  (int)p_13 + 253) & 31UL)) + 468UL));
  result = (char)(- (~ ((unsigned long long)(p + (long long)p_4) % (~ v + 313ULL))));
  return result;
}


