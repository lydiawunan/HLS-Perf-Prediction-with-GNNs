#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 998529907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, float p_5, unsigned long long p_11,
              double p_13, signed char p_15)
{
  float v_9;
  unsigned long v_7;
  unsigned int v;
  long long result;
  v = (unsigned int)p_15;
  v_7 = (unsigned long)p_13;
  v_9 = (float)(! (4294908600ULL / (p_11 + 766ULL)));
  result = (long long)((p & (unsigned long long)(- ((float)v / (p_5 + 1018.f)))) % (
                       (unsigned long long)(- ((float)v_7 * - v_9)) + 135ULL));
  return result;
}


