#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817874045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, long p_11, double p_15[3], unsigned short p_17,
        float p_19)
{
  unsigned long v_25;
  int v_23;
  float v_21;
  long v_13;
  float v_8;
  long long v_6;
  unsigned short v_4;
  long v;
  int result;
  v_25 = 4294948552UL;
  v_23 = (int)p_17;
  v_13 = -61735L;
  v_4 = (unsigned short)40823;
  v = (long)p_15[0];
  if (6118 == (int)((unsigned short)((float)(! v) / ((float)v / -6516466176.f + 765.f) + (float)(~ (! v_25))))) {
    v_21 = (float)((long long)(~ ((unsigned long)v_13 + 61738UL)) + (
                   (-1048LL + p) + (long long)(! p_17)));
    v_8 = (float)((int)((unsigned short)p_15[1]) + (int)(~ p_17)) / (
          v_21 + 582.f);
    result = (int)p_15[2];
  }
  else {
    v_25 = 5757UL;
    result = (int)((-476.947354925 - (double)((long)p_17 * p_11)) / (
                   (double)((v_25 - (unsigned long)v_13) ^ (unsigned long)(- p_19)) + 431.));
    v_8 = (float)(~ ((int)(- p_19) + (v_23 + result)));
  }
  if ((unsigned long long)p_11 != ((unsigned long long)((long long)result + p) * (
                                   (unsigned long long)p * 18446744073110847753ULL)) % 478ULL) {
    v = (long)v_8;
    v_6 = -14771LL;
    result = (int)((long long)(v % (long)((int)v_4 + 920)) + v_6);
  }
  else {
    result = (int)(- (- p_17)) % ((int)((unsigned short)((double)p_19 / (
                                                         p_15[2] + 509.) - 5.47594236979e+37)) + 491);
    v_13 = (long)(- (-435023808. + (p_15[0] + (double)result)));
    result = (int)(p - (long long)(p_11 * v_13 + 89L));
  }
  return result;
}


