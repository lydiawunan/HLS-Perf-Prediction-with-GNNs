#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448784962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, long long p_5, unsigned long long p_7,
          int p_11, unsigned int p_17[3][1][4])
{
  unsigned int v_15;
  short v_13;
  long v_9;
  signed char v;
  float result;
  v_15 = 48706U;
  v_13 = (short)19624;
  v = (signed char)(- (~ (~ p_5) / (long long)(! (! p_17[0][0][2]) + 207U)));
  v_9 = 60L;
  v = (signed char)((p_7 / 32043ULL << (68157249U % (unsigned int)((int)v + 660) & 63U)) - (unsigned long long)(~ (
                    - v_15 - 4294954406U)));
  result = (float)(((p + (unsigned long long)v) * (unsigned long long)(
                    -974.60333252f - (float)p_5) | ! p_7 * - p) + (unsigned long long)(
                   (((unsigned long)v_9 + 3625126864UL) * (unsigned long)(
                    p_11 | -1413)) * (unsigned long)v_13));
  return result;
}


