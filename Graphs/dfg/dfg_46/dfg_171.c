#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 613512085
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, signed char p_9[5])
{
  long long v_23;
  long v_21;
  double v_19;
  int v_17;
  unsigned long long v_15;
  int v_13;
  int v_11;
  unsigned long long v_7;
  char v_5;
  long long v;
  short result;
  v_23 = (long long)p_9[0];
  v_21 = (long)p;
  v_19 = 859.019869684;
  v_17 = 11025;
  v_15 = 9081ULL;
  v_13 = (int)p_9[2];
  v_11 = (int)p_9[3];
  result = (short)p_9[1];
  v_7 = (unsigned long long)(0LL / ((v_23 % 90LL | (long long)(42 - (int)result)) + 13LL) + (long long)(- (- (- v_11))));
  v = (long long)(((((double)v_15 - p) - ((double)v_17 - v_19)) / ((double)(! v_7) + 56.)) * -1.61431379776e+38);
  v_5 = (char)((unsigned long long)(((int)((signed char)(p - p)) + (int)(! p_9[2])) / 83) / (
               v_7 % (unsigned long long)(((unsigned long)(v_11 * v_13) + 48808UL) + 416UL) + 7ULL));
  result = (short)((unsigned long long)((v & (long long)2.21060185086e+38) - (long long)(~ (
                                        (int)((char)p) + (int)v_5))) % (
                   v_7 + 300ULL));
  return result;
}


