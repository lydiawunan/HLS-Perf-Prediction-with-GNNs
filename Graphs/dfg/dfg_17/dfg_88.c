#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 279911610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, char p_5[5][2], unsigned int p_7,
                  long p_9[2], char p_15)
{
  long long v_17;
  unsigned long v_13;
  unsigned int v_11;
  unsigned short v;
  unsigned long result;
  v_17 = (long long)p_7;
  v_13 = (unsigned long)((long long)(-103L + 62L % (p_9[1] + 31L)) % (
                         ! (52647LL * ((long long)p_9[1] * v_17)) + 648LL));
  v_11 = (unsigned int)(4294967295UL / ((~ (v_13 * 85UL) - (unsigned long)(~ p_15)) + 535UL));
  v = (unsigned short)19494;
  result = (unsigned long)((long long)(- ((unsigned int)v / (p + 650U))) / (
                           ((long long)p_5[1][1] - -37053LL) / (long long)(
                           ! p_7 + 266U) + 817LL) | (long long)(- ((unsigned long)p_9[1] % (unsigned long)(
                                                                   v_11 + 56U) & (unsigned long)p_5[1][0])));
  return result;
}


