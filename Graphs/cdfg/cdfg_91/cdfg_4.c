#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695104581
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[5][5][5], short p_4, long p_6, unsigned char p_8,
              unsigned char p_15)
{
  unsigned long v_23;
  int v_21;
  signed char v_19;
  char v_17;
  short v_13;
  unsigned int v_11;
  short v;
  long long result;
  v_23 = 614639220UL;
  v_21 = (int)p[4][2][2];
  v_19 = (signed char)37;
  v_17 = (char)p_6;
  v_13 = (short)-17659;
  v_11 = 4294964466U;
  v = (short)p_15;
  result = (long long)p[3][1][4];
  if ((unsigned long)(((int)p_4 / ((int)p_8 + 1023)) / ((int)(-1379565952.f / (
                                                              (float)v_13 + 74.f) + (float)(
                                                              p_6 / 120L)) + 313)) <= 4294935291UL) {
    v_11 = (unsigned int)(! ((long long)v_17 * -882776971LL) | (long long)(! (
                          (int)v_19 / (v_21 + 876))));
    v_13 = (short)(! -477341300);
    v = (short)((long long)(-104 + (int)p_15) / (! result / ((long long)p_4 / (
                                                             result + 35LL) + 233LL) + 740LL));
  }
  else {
    result = (long long)((float)(- v_23 - (unsigned long)(- p_8)) / 2.86060285795e+38f);
    v_13 = (short)-7257;
    result = ! ((result + (long long)p_6) / 524LL);
  }
  while (! (result - (long long)p_6) % (long long)((int)p_8 + 527) <= (long long)v) {
    result = (unsigned int)v_13 * (v_11 - 6U);
    v_11 = (unsigned int)p_15;
    v_13 = (short)((result + (long long)p_4) + (result & (long long)(
                                                (int)v % ((int)((short)-1.29482730509e+38f) + 337))));
    result = (long long)(~ (-53 & (int)p_15) * (int)p_8);
  }
  while_0_break: ;
  return result;
}


