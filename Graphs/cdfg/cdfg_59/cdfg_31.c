#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103010047
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, float p_9, unsigned char p_11,
                  signed char p_13, double p_15)
{
  signed char v_21;
  unsigned int v_19;
  double v_17;
  long long v_6;
  unsigned long long v_4;
  char v;
  unsigned long result;
  v_21 = (signed char)-86;
  v_19 = 621604715U;
  v_17 = -106.053885482;
  v_6 = -334LL;
  v_4 = (unsigned long long)p_13;
  v = (char)-101;
  result = p;
  if ((double)p_13 != (double)(- ((int)v_21 % -110)) / ((v_17 / (double)(
                                                         p_9 + 322.f)) * (
                                                        (double)v_19 / (
                                                        p_15 + 180.)) + 681.)) {
    v = (char)(((p_15 + p_15) + 2.22924896945e+38) + 6470.);
    result = (unsigned long)(- (1061444990 % ((int)p_13 + 638) | (int)-3662793564.5));
    v_4 = (unsigned long long)(((int)v * -23) * 81 >> 11);
  }
  else {
    result = (unsigned long)((long long)p_13 / ((-11820LL + (long long)v) + 750LL) + (long long)(- (
                             result % (unsigned long)(v_19 + 131U))));
    result = (unsigned long)((87ULL * (v_4 % (unsigned long long)((int)p_11 + 402))) / (unsigned long long)(
                             ((unsigned long)(-18 * (int)((char)v_17)) - (
                              result - 56UL)) + 310UL));
    v_4 = (unsigned long long)v;
  }
  if (! (~ (v_4 + 14659ULL)) <= (unsigned long long)p_9) {
    v_4 = (unsigned long long)((long long)(result ^ (unsigned long)(58807 / (
                                                                    (int)v + 791))) % (
                               v_6 + 806LL));
    v = (char)((int)((float)(v_4 % (unsigned long long)((int)v + 966)) / 8892199936.f) % -7307);
    result = (unsigned long)(-2 % ((int)v + 61));
  }
  else {
    v = (char)(108 - 12479 % ((int)(p_9 * (float)p_11) + 97));
    result = ~ (~ ((unsigned long)v * p));
  }
  return result;
}


