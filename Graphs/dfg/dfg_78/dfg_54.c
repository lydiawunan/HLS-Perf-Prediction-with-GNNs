#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 412304231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, char p_5, unsigned long long p_7, short p_11,
                unsigned char p_13)
{
  short v_15;
  char v_9;
  double v;
  signed char result;
  v_15 = (short)-4927;
  v = (double)p_5;
  result = (signed char)(! (! (! (! v_15))));
  v_9 = (char)(((unsigned long)(- p_11) - (4294955925UL - (unsigned long)(
                                           (int)result * (int)p_13))) * (unsigned long)p_13);
  v = (double)((float)p / -1.45904687681e+38f) / (v + 560.) + (double)(
      (unsigned long long)p_5 / (~ (p_7 * (unsigned long long)v_9) + 224ULL));
  result = (signed char)v;
  return result;
}


