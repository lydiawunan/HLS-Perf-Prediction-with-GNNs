#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305107892
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, float p_5[3][5], signed char p_9,
              double p_13, unsigned long long p_15)
{
  unsigned char v_21;
  unsigned int v_19;
  unsigned int v_17;
  unsigned char v_11;
  unsigned long long v_7;
  long v;
  long long result;
  v_21 = (unsigned char)29;
  v_19 = 3293938831U;
  v_17 = (unsigned int)p_13;
  v_11 = (unsigned char)p_9;
  v_7 = (unsigned long long)p_9;
  v = (long)p_15;
  if (v_7 + 18446744073613004306ULL >= 38ULL) {
    v_7 = (unsigned long long)(! 0U);
    result = (long long)(p_5[2][0] + -1.66389637427e+38f);
    v_17 = (unsigned int)(~ result);
  }
  else {
    v_19 = (unsigned int)((unsigned long)v / (4062655606UL % (unsigned long)(
                                              v_17 + 875U) + 468UL));
    v_11 = (unsigned char)((unsigned long long)(- ((int)((char)p_5[0][2]) | 106)) - - p_15);
    v_17 = (unsigned int)((unsigned long long)(3612981205UL * (unsigned long)(
                                               (int)p / ((int)p_9 + 244))) - 
                          (unsigned long long)v_21 * (p_15 % 83ULL));
  }
  if ((unsigned long long)((long)((int)(- p_5[1][1]) ^ 39) + 32586L) > (
      ! (p_15 * (unsigned long long)p) | (unsigned long long)(~ (v_17 ^ v_19)))) {
    result = (long long)v_11;
    v = (long)(((unsigned long long)p_5[0][4] / (v_7 + 29ULL) - (unsigned long long)(
                12512LL - result)) % (((unsigned long long)p_9 + 806475068ULL) * 275ULL + 784ULL));
    result = (long long)(- ((long)p % (~ v + 571L)));
  }
  else result = (long long)(- (- p_13));
  return result;
}


