#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 211565997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, unsigned int p_13,
                  unsigned long long p_15, long long p_19[3])
{
  long long v_17;
  short v_10;
  unsigned short v_8;
  short v_6;
  unsigned long v_4;
  short v;
  unsigned long result;
  v_17 = -574701060LL;
  v_10 = (short)p;
  v_8 = (unsigned short)p;
  v_4 = 4294966300UL;
  result = (unsigned long)p;
  v_6 = (short)((double)((unsigned int)(- (- v_8)) + (p_13 + p_13) / 38112U) / (
                (6.30053658315e+37 - (double)((unsigned long long)p_13 / (
                                              p_15 + 747ULL))) * (double)(
                (v_17 / (long long)(result + 97UL)) % ((p_19[2] - 589936646LL) + 496LL)) + 64.));
  v_8 = (unsigned short)p;
  v = (short)(! (((v_4 - (unsigned long)v_6) / (unsigned long)(((int)v_8 + (int)v_10) + 469)) % 16318UL));
  result = (unsigned long)(~ (! v));
  return result;
}


