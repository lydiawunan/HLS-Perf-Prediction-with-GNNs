#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 863782555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned long long p_4, double p_7,
                  unsigned short p_11, short p_13)
{
  long long v_17;
  float v_15;
  long v_9;
  unsigned int v;
  unsigned long result;
  v_17 = (long long)p_4;
  v_15 = (float)p;
  v_9 = (long)((float)(~ (! p_11)) / (- (- v_15) + 719.f) - (float)v_17);
  v = (unsigned int)(~ (- v_9 % (-25107L / (long)((int)p_11 + 96) + 493L)) % (long)(
                     (int)(! (! (! p_13))) + 924));
  result = (unsigned long)(- ((double)v / (p_7 + 570.)));
  result = (unsigned long)((unsigned long long)p * - (- (p_4 + (unsigned long long)result)));
  return result;
}


