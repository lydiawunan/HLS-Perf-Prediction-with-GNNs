#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599996629
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p[3], signed char p_13)
{
  long v_19;
  signed char v_17;
  long long v_15;
  unsigned int v_11;
  unsigned char v_9;
  int v_7;
  char v_5;
  unsigned long long v;
  double result;
  v_19 = (long)p_13;
  v_17 = (signed char)p[0];
  v_15 = -804510664LL;
  v_11 = 4160684282U;
  v_9 = (unsigned char)232;
  v_7 = -16736;
  v_5 = (char)27;
  v = (unsigned long long)p_13;
  result = (double)p[0];
  while (v_15 - (long long)((int)v_5 - (int)p_13) == 593LL) {
    v_17 = (signed char)((p[1] | (long long)((double)p_13 * result)) * (
                         ! p[0] - ~ p[2]));
    v = (unsigned long long)(((long long)p_13 - p[0]) / (long long)(v_19 + 600L) + (long long)(
                             (int)result - (int)((signed char)result) * 51));
    v_5 = (char)75;
  }
  while_0_break: ;
  while ((unsigned long long)(~ p[2] % (p[1] + 328LL)) % (v * (unsigned long long)(
                                                          21 + (int)v_5) + 30ULL) != (unsigned long long)v_7) {
    v_11 -= (unsigned int)((int)v_9 ^ -28015);
    result = (double)(-32LL - (v_15 + 56651LL) * (long long)((int)p_13 % (
                                                             (int)v_17 + 638)));
    v_5 = (char)((long long)(~ (! v_7)) | (long long)result / ((p[0] & (long long)p_13) + 132LL));
    v = ((unsigned long long)(p[1] - -4127723720LL) % ((unsigned long long)p[2] * v + 681ULL)) % 115ULL;
  }
  while_0_break_0: ;
  return result;
}


