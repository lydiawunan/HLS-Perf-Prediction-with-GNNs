#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261437039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_9, long p_11, unsigned long p_13,
           float p_15[1][5])
{
  unsigned long v_17;
  unsigned long v_6;
  unsigned long v_4;
  int v;
  double result;
  v_17 = 56728UL;
  v_4 = 3325708136UL;
  v_6 = (0UL - (unsigned long)(63260 >> (p_11 & 15L)) * (p_13 | 56499UL)) % (
        ((unsigned long)(1.84467440737e+19f + p_15[0][3]) - (774731615UL & 
                                                             v_17 / (
                                                             v_17 + 95UL))) + 48UL);
  v_4 = (unsigned long)(((p ^ 48LL * p) + (long long)(14UL % (v_6 + 876UL)) / (
                                          ~ p + 230LL)) / (long long)(
                        ((unsigned long)(~ p_9 / (unsigned int)(((int)((signed char)847.293830187) + -14) + 504)) + 
                         4294965546UL / (v_4 + 963UL)) + 476UL));
  v = (int)(! v_6);
  result = (double)(- ((unsigned long)(~ (v / -30418)) | ~ (v_4 ^ 4294949238UL)));
  return result;
}


