#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065877396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long long p_7, unsigned long long p_11)
{
  long v_9;
  long v_5;
  unsigned char v;
  long result;
  v_9 = (long)p;
  v_5 = (long)p;
  v = (unsigned char)p_11;
  v_5 = ! ((long)v % (- v_5 + 150L) - 2116L);
  result = (long)(-365607927U);
  result = (long)((long long)((unsigned long)result * 822709403UL) + 
                  (long long)((p - (double)v) - (double)(v_5 % (long)(
                                                         (int)v + 630))) % (
                  ! (p_7 * (long long)v_9) + 1000LL));
  return result;
}


