#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 268121312
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[1][4][2], short p_9, unsigned char p_11[5][5])
{
  long long v_15;
  int v_13;
  long v_6;
  long long v_4;
  int v;
  long long result;
  v_15 = -45486LL;
  v_13 = 554268793;
  v_6 = (long)p_11[3][4];
  v = (int)((unsigned long long)p_11[2][2] % (16141ULL / (unsigned long long)(
                                              (long long)(v_6 / (long)(
                                                          v_13 + 952)) / (
                                              (-37657LL + v_15) + 225LL) + 676LL) + 586ULL));
  v_6 = 191265287L;
  v_4 = (long long)(~ (((v_6 * v_6) / 950L) * (long)(35426 * ((int)((short)p[0][0][1]) * (int)p_9))));
  result = ~ ((long long)v * v_4) / (long long)(v + 486) << (v & 63);
  return result;
}


