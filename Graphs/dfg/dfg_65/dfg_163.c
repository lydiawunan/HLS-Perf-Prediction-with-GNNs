#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 407155452
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, long long p_5[5], unsigned int p_7, long long p_11,
         long p_15)
{
  unsigned int v_13;
  signed char v_9;
  long v;
  char result;
  v_13 = (unsigned int)p_11;
  v_9 = (signed char)-58;
  result = (char)(! ((long long)(! v_9) * - p_11 & (long long)(((unsigned long)v_13 % (unsigned long)(
                                                                p_15 + 323L)) % (
                                                               (unsigned long)p_15 / (unsigned long)(
                                                               p_7 + 973U) + 150UL))));
  result = result;
  v = 33927L;
  result = (char)((((-44355LL - (long long)p) | (long long)(195L + v)) & (long long)result) - 
                  p_5[2] * (long long)(((unsigned int)p * p_7) % ((p_7 - (unsigned int)result) + 785U)));
  return result;
}


