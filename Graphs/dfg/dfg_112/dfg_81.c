#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 542641661
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, signed char p_11[2], unsigned char p_13)
{
  double v_17;
  long v_15;
  short v_9;
  long long v_6;
  int v_4;
  unsigned short v;
  unsigned long long result;
  v_15 = (long)p_11[1];
  v_6 = (long long)p;
  v = (unsigned short)51545;
  result = (unsigned long long)p_13;
  v_4 = (int)((float)(124L / (((-64640L - (long)v) ^ (long)((int)p_13 - (int)v)) + 756L)) / (
              26036.f * - (p - (float)result) + 291.f));
  v_9 = (short)(~ (~ (result + 341307322ULL) % (unsigned long long)((
                                                                    (
                                                                    -4755LL - (long long)p) + -373LL) + 951LL)));
  v_17 = (double)p_13;
  result = (unsigned long long)(((long long)v & (long long)(670256651L ^ (long)v_4) / (
                                                v_6 * (long long)p + 723LL)) * (
                                (long long)((int)v_9 * (int)p_11[0]) % (
                                v_6 + 229LL) + (long long)((double)((long)p_13 - v_15) / (
                                                           v_17 / ((double)v_9 + 553.) + 293.))));
  return result;
}


