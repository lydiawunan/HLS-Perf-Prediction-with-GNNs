#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340139411
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned char p_5, signed char p_7,
          unsigned long p_11, signed char p_17)
{
  float v_21;
  long long v_19;
  int v_15;
  float v_13;
  long v_9;
  unsigned short v;
  short result;
  v_21 = 368.119506836f;
  v_19 = -60095LL;
  v_15 = (int)p_17;
  v_13 = (float)p_11;
  v = (unsigned short)61729;
  if (((unsigned long long)v_19 / 584677995ULL << ((int)v % (v_15 + 662) & 63)) / (
      p + 740ULL) == 40971ULL) {
    v_9 = 42377L;
    v = (unsigned short)((unsigned long)((int)p_7 / 54) - (4151215043UL / (unsigned long)(
                                                           v_9 + 348L)) % (
                                                          - p_11 + 802UL));
  }
  else {
    v_15 = (int)(((unsigned long long)((int)p_5 - v_15) | 505159502ULL / (
                                                          p + 119ULL)) % (unsigned long long)(
                 ~ (3727381712UL + p_11) + 994UL));
    v_13 = (float)(((unsigned long)(v_15 % ((int)p_17 + 93)) * ((unsigned long)p_7 % (
                                                                p_11 + 703UL))) / (
                   (unsigned long)(- v_13 + (float)(v_19 - (long long)v_21)) + 160UL));
    v = (unsigned short)v_13;
  }
  result = (short)(825677089ULL / ((p % (unsigned long long)((int)v + 416) + (
                                    (unsigned long long)p_5 + 18446744073092967553ULL)) + 363ULL));
  return result;
}


