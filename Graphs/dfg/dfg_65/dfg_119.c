#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925489344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p)
{
  float v_11;
  unsigned long long v_9;
  double v_7;
  unsigned long v_4;
  unsigned int v;
  unsigned long result;
  v_11 = (float)p;
  v_4 = (unsigned long)p;
  result = 25875UL;
  v_9 = (unsigned long long)(~ (~ p));
  v_7 = (double)(~ ((unsigned long)p | 1UL % (result + 196UL)));
  v = (unsigned int)((float)v_9 + (float)p / ((-49422.f * v_11 + - v_11) + 750.f));
  result = (unsigned long)((double)((unsigned long)(4197871995U - v) * v_4) / (
                           - ((double)p * v_7) + 952.) - - v_7);
  return result;
}


