#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038660029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long long p_5[4], int p_9[5][1])
{
  unsigned int v_7;
  long v;
  signed char result;
  v_7 = 475468481U;
  v = (long)((p_5[1] * p_5[0]) % (long long)(((unsigned long)v_7 - 44179UL) + 344UL) << (
             p_9[1][0] & 63));
  if ((double)((((unsigned long)p % 4398UL) / (((unsigned long)v - 4294940034UL) + 452UL)) / 4164683467UL) >= -16993.1817701) {
    result = (signed char)p;
    result = result;
    result = ! (! (- result));
  }
  else result = (signed char)-107;
  return result;
}


