#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160070013
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[2][5][5], long p_5, double p_9,
                       unsigned short p_11, unsigned int p_19[4])
{
  unsigned long v_17;
  long long v_15;
  short v_13;
  unsigned long long v_7;
  double v;
  unsigned long long result;
  v_15 = (long long)p_19[2];
  v_7 = 179230939ULL;
  v = (double)p_5;
  result = 18446744073060148832ULL;
  v_13 = (short)((long long)(- (p_19[2] / (p_19[0] + 226U))) / (v_15 + 780LL));
  while ((unsigned long long)((unsigned long)((unsigned int)v * p[0][4][4]) + (unsigned long)(- p_5)) - (
         (4294945800ULL ^ result) & (unsigned long long)((double)v_7 * p_9)) < (unsigned long long)(
         (int)p_11 >> ((int)(~ v_13) & 15))) {
    v_13 = (short)(708207176L - (long)(- ((double)p_5 + 9324080118.72)));
    v_17 = (unsigned long)((unsigned long long)(~ (- v_15)) + - v_7);
    v = (double)((((unsigned long)p[1][1][0] % (unsigned long)(p_5 + 734L)) % (unsigned long)(
                  ((int)((char)v) + 104) + 449)) % (v_17 / 4UL + 613UL));
  }
  while_0_break: ;
  return result;
}


