#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217290163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned char p_5, float p_7,
                  long long p_9, int p_11)
{
  char v;
  unsigned long result;
  result = (unsigned long)((long)p_11 % (- (-60L * (-434792506L * (long)p_11)) + 258L));
  v = (char)(-578908857LL - p_9);
  result = (unsigned long)((long long)(~ ((unsigned int)v + p) % ((p ^ (unsigned int)p_5) % (unsigned int)(
                                                                  (int)((unsigned char)p_7) * (int)p_5 + 929) + 92U)) % (
                           ((long long)(- ((unsigned long)5.10134039267e+37f * result)) ^ - (
                            p_9 / 27728LL)) + 179LL));
  return result;
}


