#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202391166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p[2][4][3], unsigned long long p_11[1][3][2])
{
  signed char v_13;
  long long v_9;
  long v_7;
  long long v_5;
  unsigned int v;
  long result;
  v_13 = (signed char)-5;
  v_9 = 47416LL;
  v_7 = (long)v_13;
  v_5 = (long long)(65535ULL - ((unsigned long long)v_9 - p_11[0][0][1]));
  v = (unsigned int)(! ((unsigned long long)((44934LL + v_5) - (long long)p[1][0][1]) + (unsigned long long)(
                        v_7 - (long)p[0][1][2])));
  result = (long)((long long)(-1722038975L - (long)p[1][2][0]) - (((long long)(
                                                                   v % 331569814U) + v_5) + -391086180LL));
  return result;
}


