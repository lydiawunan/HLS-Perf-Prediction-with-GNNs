#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534252674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[4][1][5], long long p_7[2][3][2], char p_9,
          long long p_11, long long p_13)
{
  short v_5;
  long long v;
  short result;
  result = (short)-17842;
  v = ! ((long long)result - ((p_11 + p_13) & (long long)p[0][0][3]));
  result = (short)((long long)p_9 * v);
  v_5 = (short)p_7[1][0][1];
  result = (short)(- (5684. + p[0][0][4]) / ((double)((long long)((int)((short)p[0][0][1]) << (
                                                                  (int)result & 15)) / (
                                                      (long long)result * v + 444LL)) / (
                                             20098.1571889 * (double)v_5 + 728.) + 781.));
  return result;
}


