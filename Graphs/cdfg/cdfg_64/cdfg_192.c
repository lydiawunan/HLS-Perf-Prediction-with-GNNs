#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475071295
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, int p_15)
{
  long long v_13;
  unsigned int v_11;
  unsigned long v_8;
  long long v_6;
  short v_4;
  int v;
  unsigned long long result;
  v_13 = -6862LL;
  v_11 = p;
  v_8 = 3281298348UL;
  v_6 = -18436LL;
  v_4 = (short)13904;
  v = (int)p;
  result = 18446744073709549066ULL;
  if ((unsigned long long)(~ (~ (p % (p + 21U)))) <= ! (result % (result + 761ULL) - 1ULL)) {
    v_11 = (unsigned int)((unsigned long long)v_11 ^ (47ULL * result) / (unsigned long long)(
                                                     p / (unsigned int)(
                                                     v + 184) + 647U));
    v_6 = ((v_6 % -105LL) % (long long)(((unsigned int)v - v_11) + 722U)) * (long long)(- (! p));
    v = (int)((3707600430ULL & ~ result) / (unsigned long long)(- (p & 12299U) + 792U));
  }
  else {
    v = (int)((v_13 * (long long)((long)p_15 - 60033L)) / (long long)(
              36U % (p + 5U) + 963U));
    v_6 = 4294967295LL;
    v_4 = (short)8138;
  }
  if ((((unsigned long long)v % 39672ULL - (unsigned long long)(! v_4)) & (unsigned long long)(! v_6)) > (unsigned long long)(
      v_6 / (long long)(! (- v_8) + 650UL))) result = 36ULL;
  else {
    result = 117ULL;
    result = result;
  }
  return result;
}


