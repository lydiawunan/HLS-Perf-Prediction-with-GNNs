#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774301690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, long long p_11, int p_13, unsigned short p_17[4][1][1])
{
  short v_19;
  long long v_15;
  long long v_9;
  char v_7;
  signed char v_4;
  char v;
  long long result;
  v_19 = (short)-24750;
  v_15 = (long long)p;
  v_9 = -38694LL;
  v_7 = (char)103;
  v_4 = (signed char)-78;
  v = (char)-77;
  v_7 = (char)(- (((long long)(p_13 * (int)v_4) + v_15 * (long long)p_17[0][0][0]) * (long long)(~ (
                  (int)v_7 | (int)v_19))));
  v_4 = (signed char)(! (((long long)v_7 - (v_9 << ((int)p & 63))) * (
                         801894176LL / ((long long)v / (p_11 + 737LL) + 963LL))));
  v = (char)(! ((int)v_4 >> (- ((int)v_4 - (int)p) & 7)));
  result = (long long)(! (! v));
  return result;
}


