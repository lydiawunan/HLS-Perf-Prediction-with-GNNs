#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065259139
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[5], unsigned long p_9[4], long long p_11,
         long long p_15[1][2][4], char p_17)
{
  unsigned long long v_19;
  unsigned char v_13;
  signed char v_7;
  unsigned short v_5;
  unsigned char v;
  char result;
  v_19 = (unsigned long long)p[4];
  v_13 = (unsigned char)254;
  v_7 = (signed char)p_9[2];
  v = (unsigned char)p_11;
  v_5 = (unsigned short)((long long)v * ! ((p_11 / ((long long)2.38157960113e+38f + 398LL)) / -57454LL));
  v = (unsigned char)((unsigned long long)((~ p_15[0][0][0] + (long long)(
                                            (int)p_17 / ((int)v_5 + 449))) + (
                                           (long long)v_13 | (142222703LL + (long long)p_9[1]))) - (
                      (v_19 % (unsigned long long)(p_15[0][0][3] + 995LL)) * (unsigned long long)(
                      -1366LL % (p_11 + 571LL)) - ~ ((unsigned long long)v_5 - v_19)));
  v_5 = (unsigned short)(p_11 + (long long)v_13);
  result = (char)(- ((float)(33585LL % (long long)((int)p[4] + 774)) / 46240220.f) - (float)(
                  (unsigned long)(((int)v - (int)v_5) % ((int)v_7 + 712)) * p_9[1]));
  return result;
}


