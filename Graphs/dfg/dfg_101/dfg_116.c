#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 153632807
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, short p_5, signed char p_7, unsigned long long p_9,
          unsigned short p_11)
{
  double v;
  float result;
  v = (double)((unsigned long long)(~ (778 / (((int)p_7 + (int)p_7) + 856))) - (
               p_9 + (unsigned long long)(~ ((int)p_11 * (int)((unsigned short)p)))));
  result = (float)((4294915395LL % (- (454947329LL % ((long long)p + 358LL)) + 216LL)) / (long long)(
                   ((long)(-116. - v) & (long)((int)(- p_5) * ((int)((unsigned char)p) / 202))) + 345L));
  return result;
}


