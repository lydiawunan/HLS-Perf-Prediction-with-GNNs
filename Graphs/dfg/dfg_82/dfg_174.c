#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 721069419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p[5][5], int p_7, signed char p_9,
                   unsigned long long p_11, unsigned long long p_17)
{
  long long v_15;
  short v_13;
  double v_5;
  unsigned long v;
  unsigned short result;
  v_13 = (short)p[4][4];
  v_5 = (double)p_11;
  v = 4294945738UL;
  v_15 = (long long)(485187106UL / (((unsigned long)((float)p_17 / -2.69068048112e+38f) - v) / (
                                    (unsigned long)((double)v_13 - v_5) + 292UL) + 142UL));
  v_5 = (double)(p[2][1] / ((float)(28925LL * ! v_15 + (long long)v) + 845.f));
  result = (unsigned short)(- p[4][2]);
  result = (unsigned short)((unsigned long long)(- ((unsigned long)p[1][0] ^ v) / (
                                                 ((unsigned long)result + 640102068UL) % (
                                                 (unsigned long)((double)p[4][1] + v_5) + 385UL) + 320UL)) / (
                            (unsigned long long)(((unsigned long)p_7 - 4294910603UL) ^ (unsigned long)(
                                                 p[0][0] / ((float)p_9 + 12.f))) % (
                            ((p_11 >> 46LL) + (unsigned long long)v_13) + 168ULL) + 342ULL));
  return result;
}


