#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 144878979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned long long p_4, unsigned int p_6,
         long long p_9)
{
  signed char v_11;
  long long v;
  long result;
  v_11 = (signed char)p_6;
  v = -112211598LL;
  v = ! ((long long)(-23806 - (int)((short)8.24374786095e+37f)) - (p_9 + (long long)v_11)) - ! v;
  result = (long)((long long)(~ p_6) % (v + 722LL));
  result = (long)(~ (((unsigned long long)(- p) | ((unsigned long long)p + p_4)) % (unsigned long long)(
                     result + 88L)));
  result = result;
  return result;
}


