#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 978640679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, signed char p_5, unsigned int p_7, int p_9[3][4],
              char p_11)
{
  long long v;
  long long result;
  v = ((-44197LL - (long long)p) % (long long)((long)p_5 / (p + 298L) + 933L) << (
       p_7 % (unsigned int)((43781 - p_9[0][2]) + 526) & 63U)) % (((long long)(
                                                                   (unsigned int)p_11 | p_7) & (
                                                                   909510982LL - (long long)p_11)) + 1023LL);
  result = 4114328370LL;
  result *= v;
  return result;
}


