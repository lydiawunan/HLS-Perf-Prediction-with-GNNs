#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626583037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned int p_5, float p_11, double p_13,
                  short p_17)
{
  signed char v_15;
  unsigned short v_9;
  long long v_7;
  double v;
  unsigned long result;
  v_15 = (signed char)p_13;
  v = -859.440839602;
  v = - ((double)p_17 - - ((double)p_17 + v));
  v_9 = (unsigned short)(! v_15);
  v_7 = (long long)((double)((float)(- ((unsigned long)p_5 ^ 4294965002UL)) / (
                             (4294930432.f - p_11 * (float)p_5) + 389.f)) / (
                    - p_13 + 781.));
  result = (unsigned long)((((v + (double)p) + (double)p) * (double)(~ p_5)) / (double)(
                           (- ((float)v_7 + -9294915584.f) - (float)v_9) + 110.f));
  return result;
}


