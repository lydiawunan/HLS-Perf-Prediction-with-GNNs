//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693751627
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, short p_9, unsigned short p_11,
                       long long p_13, unsigned long long p_15)
{
  long v_7;
  unsigned int v_4;
  unsigned short v;
  unsigned long long result;
  result = 56226ULL;
  v_7 = (long)(28ULL % ((18446744073709526227ULL / (result + 922ULL)) / (
                        ((unsigned long long)(p_13 / -25316LL) ^ p_15 * (unsigned long long)p_13) + 896ULL) + 939ULL));
  v = (unsigned short)(~ ((unsigned long long)((int)p_9 ^ (int)p_11) * result << 62U));
  v_4 = (unsigned int)(-222343625. * - ((p + (double)v_7) - (double)(
                                        (long)p_9 / -508127742L)));
  result = (unsigned long long)((long long)v / (~ ((long long)v_4 * 734467264LL) + 627LL));
  return result;
}


