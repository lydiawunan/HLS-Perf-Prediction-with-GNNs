#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 899832777
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, unsigned long p_5, long long p_9, long p_11, long p_13)
{
  long long v_17;
  long v_15;
  double v_7;
  short v;
  long long result;
  v_17 = 536877956LL;
  v = (short)p_13;
  result = -27753LL;
  v_15 = (long)(- ((long long)p_5 + ((long long)v & result) % (long long)(
                                    462180416UL / (p_5 + 295UL) + 222UL)));
  v_7 = (double)v_17;
  v = (short)((- ((unsigned long)p_13 | p_5) >> ((1057085825L % (p_11 + 320L) ^ (
                                                  v_15 - p_11)) & 31L)) % (
              p_5 + 454UL));
  result = (long long)(((unsigned long long)(! (p ^ -633173746)) - (1026876481ULL + (unsigned long long)v) / (unsigned long long)(
                                                                   (p_5 - (unsigned long)p) + 21UL)) + (unsigned long long)(
                       ((long long)v_7 % (p_9 + 978LL)) * (long long)(~ p_11) - -463249944LL));
  return result;
}


