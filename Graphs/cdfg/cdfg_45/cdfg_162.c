#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 686507398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned int p_7, int p_11, long long p_13,
           unsigned int p_15[4][1][3])
{
  unsigned char v_17;
  long v_9;
  short v_5;
  unsigned long v;
  double result;
  v_17 = (unsigned char)113;
  v_9 = (long)p_7;
  v = (unsigned long)(! (! (-201385098 / ((int)6724395008.f + 664))));
  if ((unsigned long long)(~ (! ((unsigned int)v_17 * p_15[2][0][1]))) > p) {
    v_5 = (short)(~ ((unsigned long)p_7 * (unsigned long)v_9) + (unsigned long)p_11);
    result = (double)(((p | (unsigned long long)v) * (unsigned long long)(
                       v << ((int)v_5 & 31))) % (unsigned long long)(
                      (int)(! v_5) + 281));
    result = (double)((int)result / -1947);
  }
  else {
    v = (unsigned long)((495373635ULL - p * 161ULL) / 18446744073709519859ULL);
    result = (double)(- ((-14610LL % (p_13 + 856LL)) * (long long)(v ^ (unsigned long)p_15[0][0][1])));
  }
  return result;
}


