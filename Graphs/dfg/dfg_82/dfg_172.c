#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 355914465
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, long long p_5, char p_9, long long p_11[3][5][1])
{
  short v_7;
  unsigned char v;
  unsigned short result;
  v_7 = (short)46;
  v = (unsigned char)((long long)(! (-989 * ((int)v_7 % ((int)p_9 + 493)))) - ~ (~ p_11[0][0][0]));
  result = (unsigned short)(~ ((unsigned long long)(- ((int)p - (int)p)) / (
                               (unsigned long long)((long long)v / (p_5 + 1009LL)) * 18446744073709501135ULL + 467ULL)));
  return result;
}


