#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 542118602
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned int p_5, unsigned int p_7,
                  double p_9, double p_13)
{
  unsigned int v_17;
  unsigned long v_15;
  unsigned char v_11;
  long v;
  unsigned long result;
  v_17 = 4294933829U;
  if ((unsigned int)p_13 <= ! v_17) v = (long)(- ((double)(92U / (p_7 + 21U)) / (
                                                  - p_9 + 992.)));
  else {
    v_15 = (unsigned long)(~ (p_7 * ! p_7));
    v_11 = (unsigned char)(((double)((unsigned long)p_13 / (v_15 + 70UL)) - (
                            -19983. + p_9)) + (double)p_5);
    v = (long)((unsigned int)v_11 / ((4294967295U | (p_7 + (unsigned int)p_13)) + 732U));
  }
  if ((long long)(! (43289L * v)) % 1011130619LL < (long long)(~ (p_5 | 122U))) {
    result = 77020UL;
    result = - (58353UL * result) % (p + 362UL);
  }
  else result = (unsigned long)(-301729659ULL);
  return result;
}


