#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764101311
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, long long p_5, int p_13)
{
  int v_11;
  signed char v_9;
  char v_7;
  unsigned long long v;
  long long result;
  v_11 = -588538985;
  v_9 = (signed char)p_13;
  v_7 = (char)p_13;
  result = (long long)((p >> ((int)v_9 & 31)) ^ (unsigned long)(! (- v_11 & 
                                                                   p_13 / -30)));
  v = (unsigned long long)(p_5 / (~ ((long long)((unsigned long)-9852582318.48 % 4294960276UL) - (
                                     result + (long long)v_7)) + 688LL));
  result = (long long)(~ p);
  result = (long long)(104ULL / (0ULL / (((unsigned long long)result - v) + 17ULL) + 335ULL) | 34ULL);
  return result;
}


