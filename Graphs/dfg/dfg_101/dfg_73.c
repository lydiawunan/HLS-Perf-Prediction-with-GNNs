#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106901571
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, long long p_5, unsigned short p_11)
{
  unsigned long v_17;
  unsigned int v_15;
  double v_13;
  unsigned short v_9;
  double v_7;
  unsigned long v;
  long result;
  v_17 = (unsigned long)p_11;
  v_15 = (unsigned int)p;
  v_13 = (double)p_5;
  v_9 = (unsigned short)47804;
  v_7 = (double)((unsigned long)v_13 % (((unsigned long)v_15 - v_17 * p) % (unsigned long)(
                                        (int)(~ p_11) + 903) + 76UL));
  v = (unsigned long)(4234488982LL + (p_5 * (long long)v_7 ^ (long long)(~ (
                                      (int)v_9 + (int)p_11))));
  result = (long)(- (- (65357ULL - (unsigned long long)v) / (18446744073709551503ULL / (
                                                             30419ULL * (unsigned long long)p + 729ULL) + 554ULL)));
  result = 2490L | result;
  return result;
}


