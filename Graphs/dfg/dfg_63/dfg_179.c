#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536203541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[1][4][3], unsigned char p_7, unsigned short p_13,
                  long long p_15[4], float p_17)
{
  double v_19;
  long long v_11;
  unsigned char v_9;
  double v_5;
  unsigned int v;
  unsigned char result;
  v_19 = -2.7988883443e+38;
  v_9 = (unsigned char)p_15[3];
  v_5 = (double)p_7;
  v = (unsigned int)p_15[3];
  v_11 = (long long)((-578335.5342 / (double)((float)p_15[0] / (p_17 + 207.f) + 441.f) - (double)(
                      ((long long)v_19 % (p_15[1] + 120LL)) % (long long)(
                      (int)(! v_9) + 449))) + (double)(4294937218U + ~ (~ v)));
  v_9 = (unsigned char)((unsigned long long)v_11 / (- ((unsigned long long)(! p_13) ^ 63329ULL) + 280ULL));
  v = (unsigned int)v_9;
  result = (unsigned char)((int)((unsigned char)((double)v * - p[0][0][0] - (
                                                 (double)((int)((char)v_5) * -51) - - p[0][1][1]))) * (int)(! p_7));
  return result;
}


