#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641794143
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, double p_7, unsigned long p_9[4],
           unsigned int p_11, long p_13[3][4])
{
  int v_5;
  unsigned char v;
  double result;
  v = (unsigned char)p_7;
  v_5 = (int)(! (~ (4294940887ULL / (p + 547ULL))) % (unsigned long long)(
              - ((unsigned long)((double)p_9[2] * -296.097573556) * (
                 (unsigned long)p_11 | (unsigned long)p_13[0][3])) + 903UL));
  result = (double)(! p + ((unsigned long long)((double)((int)v * v_5) / (
                                                p_7 + 274.)) + 5935169ULL % (
                                                               p / ((unsigned long long)p_7 + 365ULL) + 107ULL)));
  return result;
}


