#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 47922523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, long long p_5, float p_9,
                   unsigned char p_17[5][4], double p_19)
{
  int v_31;
  short v_29;
  int v_27;
  unsigned long v_25;
  double v_23;
  int v_21;
  unsigned char v_15;
  int v_13;
  unsigned long long v_11;
  signed char v_7;
  double v;
  unsigned short result;
  v_31 = (int)p_5;
  v_27 = 104116863;
  v_23 = 255.532053739;
  v_21 = (int)p_9;
  v_15 = (unsigned char)p_9;
  v_13 = (int)p_5;
  if ((long long)(- v_13 % (v_31 / ((int)p + 721) + 993)) / (- (! p_5) + 991LL) == 81LL) {
    v_11 = (unsigned long long)(- ((double)p_17[3][3] - p_19) * ((double)v_21 * (
                                                                 v_23 * (double)p)));
    v_7 = (signed char)(~ (((unsigned int)v_13 + 4294924796U) | (unsigned int)(- v_15)));
    v = (double)((unsigned long long)((long)((int)v_7 / ((int)((signed char)p_9) + 716)) - 487465824L) - ~ (
                 v_11 / 18446744073460287048ULL));
  }
  else {
    v_29 = (short)(~ p_5);
    v_25 = (unsigned long)v_29;
    v = (double)((v_25 & (unsigned long)v_27) | (unsigned long)((int)1.20897484637e+38 / -56919)) * p_19;
  }
  result = (unsigned short)((46884ULL * (unsigned long long)p) % 232ULL & (unsigned long long)(
                            (long long)v - -4152LL * p_5));
  return result;
}


