#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 38188127
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p[4][4], short p_7, long long p_11,
                       unsigned long long p_15)
{
  short v_13;
  signed char v_9;
  long v_4;
  int v;
  unsigned long long result;
  v_13 = p[2][1];
  v_9 = (signed char)119;
  v_4 = -200778511L;
  v = -880637324;
  v_9 = (signed char)((unsigned long long)((long long)(3596452877U << 8) ^ -856890238LL) / (
                      (unsigned long long)((int)((float)p_11 + -2.24676161319e+37f) ^ (
                                           (int)v_13 | (int)v_9)) % (
                      ((p_15 - 29198ULL) + (unsigned long long)((long)v + v_4)) + 935ULL) + 947ULL));
  v_4 = (long)v_9;
  v = ~ (- (704506551 / ((int)p[2][2] + 1014)) * ((11068827 + (int)p[2][2]) % (
                                                  ((int)p_7 + 11) + 224)));
  result = (unsigned long long)(- ((unsigned long)v * 22804UL) % 105UL & (unsigned long)v_4);
  return result;
}


