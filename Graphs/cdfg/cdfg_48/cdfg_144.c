#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 183479319
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned char p_4[5], double p_6, int p_13,
          signed char p_15)
{
  long long v_11;
  long long v_9;
  long long v;
  short result;
  v_11 = 327682791LL;
  v_9 = 54370LL;
  if (17320L <= (long)((int)p_15 << (~ (13985LL / (v_9 + 957LL)) & 7LL))) {
    v_9 = (long long)-16.7038647602;
    v = ((long long)(~ p) ^ ~ v_9) + - v_11;
    result = (short)((1054674097. - (p_6 + 18237.)) / ((double)(39011LL - 
                                                                -117LL * v) + 96.));
  }
  else {
    v_9 = (long long)(- p_13);
    result = (short)(~ (- (v_9 / 1059833804LL)));
  }
  result = (short)(- (p * 4294967220UL) ^ (unsigned long)(((int)p_4[2] / (
                                                           (int)result + 961)) * 236));
  return result;
}


