#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 395918600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, unsigned char p_4, int p_7,
              unsigned long p_11[1], short p_13)
{
  unsigned long v_17;
  long long v_15;
  int v_9;
  int v;
  long long result;
  v_17 = (unsigned long)p_13;
  v = 9896;
  v_15 = (long long)(~ v);
  v_9 = (int)(((long long)((double)(18 / ((int)p_13 + 397)) / -2.01528057311e+38) >> (
               (long long)(- p_13) % ((54755LL - v_15) + 681LL) & 63LL)) + (long long)(- (! (
              v_17 + (unsigned long)v))));
  v = (int)((unsigned long)(! p_7) / (((unsigned long)(81 / (! v_9 + 842)) + (
                                       60UL * p_11[0] + (unsigned long)p_13)) + 114UL));
  result = (long long)(! ((unsigned long)(-607800775L - (long)1.16332782361e+38f) - (unsigned long)(
                          31U * p)) + (unsigned long)p_4 / ((40140UL + (unsigned long)v) + 895UL));
  return result;
}


