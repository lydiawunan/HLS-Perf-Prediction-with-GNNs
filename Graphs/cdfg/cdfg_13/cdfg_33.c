#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820946502
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, double p_7)
{
  signed char v_11;
  signed char v_9;
  unsigned int v_5;
  long v;
  unsigned long long result;
  v_11 = (signed char)p;
  v = (long)p;
  result = (unsigned long long)p;
  v_5 = (unsigned int)(~ (result % (unsigned long long)(p + 182)) + result / 11555ULL);
  while ((int)((double)((65460L % (v + 7L)) % 511L) + ((double)p + -6.0737214644e+37) / (
                                                      (double)result + 968.)) >= 
         p * p) {
    v_9 = v_11;
    v = (long)((unsigned long long)(43554U - v_5) * (18446744072928872318ULL - (unsigned long long)v_9));
    result = (unsigned long long)(~ ((p * p) * (p | (int)p_7)));
  }
  while_0_break: ;
  return result;
}


