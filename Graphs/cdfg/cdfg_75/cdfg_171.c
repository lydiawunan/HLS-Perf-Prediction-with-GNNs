#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471383594
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned long long p_5[3][1][3], unsigned char p_7,
                double p_11[4][5], short p_13[1][3][2])
{
  short v_19;
  unsigned char v_17;
  unsigned long long v_15;
  int v_9;
  long long v;
  signed char result;
  v_19 = (short)p_11[3][2];
  v_17 = (unsigned char)93;
  v_9 = (int)p_13[0][0][1];
  v_15 = 198ULL;
  if ((unsigned long long)((int)v_17 ^ (int)v_17) > ((unsigned long long)(
                                                     (int)v_19 % ((int)p_13[0][2][1] + 911)) * 451670185ULL) / (unsigned long long)(
                                                    (int)v_19 + 53)) {
    result = (signed char)p_7;
    v = (long long)result;
    result = (signed char)((unsigned long long)((int)p % ((int)result + 325)) / 41580ULL & (
                           (unsigned long long)v ^ ((unsigned long long)result ^ p_5[0][0][0])));
  }
  else {
    result = (signed char)((unsigned long long)(! (! p_13[0][0][1])) - 
                           135323181ULL % ((unsigned long long)v_9 % (
                                           v_15 + 456ULL) + 548ULL));
    v = ((long long)result * -16965LL - (long long)((int)((unsigned char)p_11[1][1]) / (
                                                    (int)p_7 + 949))) * 366564462LL;
    result = (signed char)((double)((long long)(~ result) + (long long)p % (
                                                            v + 35LL)) + (
                           ((double)v_9 - p_11[3][3]) + 1339.));
  }
  return result;
}


