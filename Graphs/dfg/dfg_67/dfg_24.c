#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872849682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p[2][4], int p_13[5][4])
{
  unsigned long long v_15;
  unsigned int v_11;
  char v_9;
  long long v_7;
  short v_4;
  unsigned long v;
  unsigned short result;
  v_11 = 19998U;
  v_9 = (char)125;
  v_7 = -580976667LL;
  v_4 = (short)p[1][3];
  v = (unsigned long)p_13[2][3];
  result = (unsigned short)p_13[1][3];
  v_15 = (unsigned long long)(! ((long long)(p_13[4][1] << (p[0][3] & 31UL)) * (
                                 (long long)v_11 + v_7)) & (long long)(
                              -105 >> 5));
  v_9 = (char)(~ (v_15 | (unsigned long long)(p_13[3][1] * (int)v_9)) + (unsigned long long)(
               -35988L % (long)(! (- p_13[0][1]) + 114)));
  v_7 = (long long)(v_11 + (unsigned int)(~ (-19569 + p_13[2][3]) + (int)(
                                          19848. / (((double)result + -1759951195.99) + 1015.))));
  result = (unsigned short)((- v * (unsigned long)(! v_4)) * - p[0][1] << (
                            ((unsigned long long)(! v_7 * (long long)v_9) + (
                             (unsigned long long)(2774UL | v) - (42809ULL - (unsigned long long)p[1][2]))) & 31ULL));
  return result;
}


