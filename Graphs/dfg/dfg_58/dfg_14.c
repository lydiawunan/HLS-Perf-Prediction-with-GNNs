#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421536930
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned int p_4, unsigned long p_9, float p_11,
         double p_15)
{
  long long v_13;
  float v_7;
  char v;
  char result;
  v_7 = 1205790464.f;
  v_13 = (long long)(- (~ ((unsigned long)p_4 * p_9 | (unsigned long)(
                           (int)((char)p_15) % 126))));
  result = (char)v_13;
  v = (char)((float)((unsigned long)(- (! result)) / (~ ((unsigned long)v_7 / (
                                                         p_9 + 719UL)) + 32UL)) / (
             p_11 + 505.f));
  result = (char)(-1.57812587825e+18 * - (- p) - (p + (double)(p_4 % (unsigned int)(
                                                               (int)(! v) + 555))));
  return result;
}


