#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 719093908
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned char p_9, long long p_15,
              unsigned long long p_19[3][1])
{
  unsigned long v_17;
  double v_13;
  unsigned int v_11;
  char v_7;
  long long v_5;
  double v;
  long long result;
  v_17 = (unsigned long)p_15;
  v_13 = (double)p_15;
  v_11 = (unsigned int)p_19[0][0];
  v_7 = (char)23;
  result = 593840447LL;
  v_7 = (char)((unsigned long long)(21LL % (((result + (long long)v_13) >> (
                                             p_15 % (long long)((int)v_7 + 183) & 63LL)) + 631LL)) & ! (! (
               (unsigned long long)v_17 ^ p_19[1][0])));
  v_5 = (long long)((unsigned long)v_7 % (~ ((unsigned long)(58754 + (int)p_9) ^ (
                                             (unsigned long)v_11 + p)) + 979UL));
  v = (double)v_5;
  result = (long long)((unsigned long)v / (p + 611UL));
  return result;
}


