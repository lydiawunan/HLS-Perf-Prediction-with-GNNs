#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 376322911
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, double p_7, unsigned short p_9, unsigned char p_17)
{
  unsigned long v_15;
  unsigned long long v_13;
  char v_11;
  double v_5;
  unsigned short v;
  long long result;
  v_15 = 14360UL;
  v_11 = (char)17;
  v_13 = (unsigned long long)(! (~ (v_15 & 752566798UL) + (unsigned long)p_17));
  v_5 = (double)(87ULL & (((unsigned long long)((int)v_11 * (int)v_11) - v_13) - (unsigned long long)(
                          4243445209UL + v_15 / (unsigned long)((int)p_17 + 473))));
  v = (unsigned short)((unsigned long long)(- p - 29684) - - (18446744073709535532ULL + (unsigned long long)p_7) % (unsigned long long)(
                                                           (int)p_9 + 946));
  result = (long long)((double)((int)v / (~ p + 580)) - - v_5);
  return result;
}


