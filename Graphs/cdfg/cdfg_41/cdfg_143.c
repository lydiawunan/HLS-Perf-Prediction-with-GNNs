#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 814261031
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned int p_4[4][1],
                   unsigned long p_9[1], unsigned long p_11,
                   unsigned int p_19)
{
  unsigned long long v_17;
  long long v_15;
  long v_13;
  double v_7;
  unsigned long long v;
  unsigned short result;
  v_15 = (long long)p_11;
  v = (unsigned long long)(! p_11);
  if (68ULL > (unsigned long long)p_19 / ((73ULL + v) / (unsigned long long)(
                                          ! p_19 + 548U) + 303ULL)) {
    v_7 = (double)(4294967197UL + p_11);
    result = (unsigned short)(- ((unsigned long long)p_4[0][0] * v & (unsigned long long)(
                                 (unsigned long)v_7 / (p_9[0] + 134UL))));
    result = (unsigned short)0;
  }
  else {
    v_17 = (unsigned long long)v_15;
    v_13 = (long)(~ ((unsigned long long)((long long)p_4[2][0] | v_15) % (
                     (v_17 ^ (unsigned long long)p_19) + 977ULL)));
    result = (unsigned short)v_13;
  }
  return result;
}


