#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423909703
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[3], long p_4, long p_7, long long p_9,
                float p_11)
{
  short v;
  signed char result;
  v = (short)((unsigned long long)p_9 * ((unsigned long long)(- p_11) % (
                                         (unsigned long long)(p_4 | (long)p_11) / 18446744072927739690ULL + 68ULL)));
  result = (signed char)(! p_7);
  result = (signed char)(((0 / (long long)(-74 * (int)p[0] + 779)) / (long long)(
                          p_4 + 46L)) * (long long)((int)(! (! v)) * - (
                                                    (int)result - 123)));
  return result;
}


