#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749017045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[5][3][1], unsigned long long p_5, double p_7,
                  unsigned int p_11, long long p_13)
{
  unsigned long long v_19;
  unsigned short v_17;
  char v_15;
  char v_9;
  char v;
  unsigned char result;
  v_19 = 766282220ULL;
  v_17 = (unsigned short)46269;
  v_15 = (char)((~ (p_5 + v_19) ^ (unsigned long long)(p_13 / (long long)(
                                                       (-36 - (int)((signed char)p_7)) + 235))) % (
                ! (18446744073707156224ULL * p_5) + 442ULL));
  v_9 = (char)(! ((long long)p_11 | p_13 % -113LL) + (long long)((int)v_17 % (
                                                                 (int)((unsigned short)(
                                                                 (p_7 - -9312252753.42) * 507.142673868)) + 860)));
  v = (char)(((p[3][0][0] - 28179.) - ((double)p_5 + p_7)) * (double)(
             (float)(~ v_9) + -965.465148926f / ((float)p_11 + 890.f)) - (double)(
             ((unsigned long long)p_13 / 18446744072800210911ULL) / (
             (unsigned long long)-213.604868383 + 482ULL) - (unsigned long long)(
             (long long)(p_11 * p_11) / (((long long)v_15 - p_13) + 595LL))));
  result = (unsigned char)v;
  return result;
}


