#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743898907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, long long p_5)
{
  unsigned int v_13;
  float v_11;
  signed char v_9;
  float v_7;
  long v;
  unsigned long long result;
  v_13 = 4294907866U;
  v_11 = 9.15831923243e+37f;
  v_7 = 1.48393227786e+38f;
  v_9 = (signed char)v_13;
  result = (unsigned long long)((float)(706907602UL - (unsigned long)(! v_9)) * - (- v_11)) - 
           (unsigned long long)v_9 * 18882600ULL;
  v = (long)v_7;
  result = ((result + ((unsigned long long)p & 6796ULL)) / (unsigned long long)(
            v / ((long)4753675776.f + 54L) + 739L)) / (unsigned long long)(
           p_5 * (long long)v + 428LL);
  return result;
}


