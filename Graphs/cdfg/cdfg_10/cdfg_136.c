#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949243797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, long long p_5, double p_7, long p_9,
           unsigned char p_13)
{
  unsigned short v_15;
  unsigned long long v_11;
  long long v;
  double result;
  v_15 = (unsigned short)p;
  if ((int)p_13 > - (((int)p % -18784) * (int)(- v_15))) {
    v = (long long)(p_9 + 153L);
    result = (double)(((long long)p % (v + 505LL)) * (p_5 >> 55) + (long long)(~ (
                      (int)p + (int)((signed char)p_7))));
  }
  else {
    v_11 = (unsigned long long)(! (21760LL * p_5));
    result = (double)(26941ULL - (v_11 ^ 232ULL));
  }
  result /= result + 787.;
  return result;
}


