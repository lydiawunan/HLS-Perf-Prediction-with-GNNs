#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 73637787
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, int p_5, unsigned char p_7, unsigned long p_13,
              long long p_15)
{
  short v_21;
  int v_19;
  long long v_17;
  unsigned long long v_11;
  signed char v_9;
  char v;
  long long result;
  v_21 = (short)p_15;
  v_19 = (int)p_15;
  v_11 = 18446744073045121721ULL;
  v = (char)-43;
  if (p_13 - (unsigned long)(~ (-333616780L << (v_19 & 31))) >= (unsigned long)(- v_21)) {
    v_11 = 149ULL;
    v_9 = ~ (~ (signed char)9);
  }
  else {
    v_17 = 22LL;
    v_9 = (signed char)(((long long)p_7 - p_15) / (long long)(p_13 + 35UL) + (long long)p_5);
    v_11 = (v_11 % (v_11 + 781ULL)) / (unsigned long long)(((long long)v_9 + v_17) + 910LL) | (unsigned long long)(
           (v_17 ^ -546LL) & (long long)((int)v + (int)p_7));
  }
  if ((unsigned long long)p_7 < ((unsigned long long)(~ v_9) + 18446744073709550367ULL) >> (
                                (v_11 * (unsigned long long)p_13 - (unsigned long long)(
                                 39549LL * p_15)) & 63ULL)) {
    v = (char)-179.177100946;
    result = (long long)(- (~ v));
  }
  else result = -66LL;
  return result;
}


