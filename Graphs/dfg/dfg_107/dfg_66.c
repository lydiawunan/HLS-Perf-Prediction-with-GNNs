#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 555927934
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, char p_9, int p_11[3])
{
  unsigned char v_15;
  unsigned char v_13;
  unsigned long v_7;
  unsigned long long v_5;
  unsigned int v;
  char result;
  v_15 = (unsigned char)16;
  v_13 = (unsigned char)18;
  v = 51953U;
  v_7 = (unsigned long)v_15;
  v = ((unsigned int)((int)-2511828480.f * ! p_11[0]) & (v % 100U - 231U)) * ! (
      (unsigned int)(15821 + (int)v_13) - 16726U * (unsigned int)p_11[2]);
  v_5 = (unsigned long long)(((38897LL ^ (long long)p_9) * (long long)(
                              30814 - p_11[1]) - (long long)p_9) + (long long)(
                             (int)p ^ (int)(~ (- v_13))));
  result = (char)((unsigned long long)(~ (v * (unsigned int)p + 26711U)) * (
                  v_5 * 18446744073709544747ULL & (unsigned long long)(~ (
                  35839UL + v_7))));
  return result;
}


