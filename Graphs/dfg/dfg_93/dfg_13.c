#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638470567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, float p_7[3])
{
  int v_11;
  long long v_9;
  unsigned char v_5;
  short v;
  long long result;
  v_11 = 35415;
  v_5 = (unsigned char)p_7[1];
  result = (long long)p_7[2];
  v_9 = (long long)(! (~ v_11));
  v = (short)(! (~ (~ v_9)));
  result = 120LL / ((((long long)v_5 - result) % ((long long)(p_7[1] - (float)v) + 720LL) - -10194081980LL) + 86LL);
  result = (long long)(((unsigned long long)(result * (long long)v ^ (long long)(~ p)) / 31370ULL) % (unsigned long long)(
                       result + 583LL));
  return result;
}


