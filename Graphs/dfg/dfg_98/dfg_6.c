#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 405820214
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, double p_4[2], unsigned long p_7, char p_9,
                long p_11)
{
  double v;
  signed char result;
  v = (double)(~ ((unsigned long)(! p_9) % (p_7 * (unsigned long)p_11 + 652UL)) % (unsigned long)(
               p + 1015U));
  result = (signed char)((2.27359808064e+38 - (((double)p - p_4[0]) + (
                                               v - 292542157.))) - (double)(
                         p_7 - 4294937564UL));
  return result;
}


