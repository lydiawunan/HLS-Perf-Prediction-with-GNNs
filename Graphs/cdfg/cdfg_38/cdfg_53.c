#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 993023718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[4][3], unsigned int p_5, unsigned long p_7,
        unsigned long long p_9)
{
  unsigned long long v_11;
  unsigned long v;
  int result;
  v_11 = p[3][0];
  v = (unsigned long)((p[3][1] / (unsigned long long)(p_5 + 585U)) / (
                      ((unsigned long long)p_7 / (p_9 + 312ULL)) / (! v_11 + 946ULL) + 534ULL));
  result = (int)(~ (196UL + ~ v));
  return result;
}


