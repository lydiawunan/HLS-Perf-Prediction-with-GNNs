#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692813669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long long p_9[4][3],
              unsigned short p_11[3][4][5], short p_13,
              unsigned long long p_15)
{
  long v_7;
  unsigned int v_5;
  unsigned long long v;
  long long result;
  v_7 = 27545L;
  result = 373495518LL;
  v = (unsigned long long)-509.299545328;
  if ((unsigned long long)p_13 != (unsigned long long)v_7 - (p_15 % (
                                                             p_15 + 813ULL) + (
                                                             (unsigned long long)p - v))) 
    result = (long long)((unsigned long long)(! (28054 * (int)p)));
  else {
    v_5 = (unsigned int)(~ ((int)((unsigned short)-15535920.f) - (int)p_11[0][0][2]));
    v = (unsigned long long)p_11[0][0][2];
    result = (long long)(((unsigned long long)(result - result) + v % (unsigned long long)(
                                                                  v_5 + 898U)) - (
                         (unsigned long long)(~ p) + ((unsigned long long)v_7 & p_9[3][2])));
  }
  return result;
}


