#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 166548685
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, char p_4, unsigned long p_7[5],
                  unsigned long long p_9, double p_15)
{
  unsigned long long v_17;
  long long v_13;
  unsigned short v_11;
  int v;
  unsigned long result;
  v_17 = (unsigned long long)p;
  v_13 = -472247595LL;
  v = 17507;
  v_11 = (unsigned short)(! ((unsigned long long)((double)(4294931480LL + v_13) * (
                                                  p_15 * 1.84467440729e+19)) ^ 
                             (v_17 + (unsigned long long)p_4) / (unsigned long long)(
                             (int)p_4 + 125)));
  v = (int)((p_7[4] / ((unsigned long)(7958490322.07 * (double)p_9 - (double)(
                                       (float)v / 597.811401367f)) + 484UL)) / (unsigned long)(
            - ((int)p_4 * (int)(- v_11)) + 103));
  result = (unsigned long)v;
  result = (unsigned long)((unsigned long long)(3893178608UL ^ ~ result / (
                                                               (result - 38UL) + 896UL)) * (
                           (unsigned long long)((double)(p / (p + 965.f)) * -3.02638943321e+38) / (
                           ((unsigned long long)((long long)p_4 / -312546625LL) - 18446744073709540488ULL) + 962ULL)));
  return result;
}


