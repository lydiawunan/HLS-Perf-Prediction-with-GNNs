#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 963195049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, long long p_5)
{
  float v_9;
  unsigned long long v_7;
  unsigned long long v;
  unsigned long result;
  v_7 = (unsigned long long)p_5;
  v_9 = (float)889375085ULL;
  v = ~ ((unsigned long long)((long long)p - p_5) / (- v_7 + 618ULL) << (
         (unsigned long long)((long long)v_9 + p_5) / (! v_7 + 797ULL) & 63ULL));
  result = (unsigned long)(v * 4294930155ULL);
  result = (unsigned long)((v / 18446744073678576749ULL) * (unsigned long long)result + 4294946570ULL);
  return result;
}


