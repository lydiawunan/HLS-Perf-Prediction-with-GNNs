#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 128274200
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, long long p_5[3][5], int p_9, double p_11)
{
  int v_7;
  unsigned char v;
  unsigned char result;
  v = (unsigned char)(p_9 * - ((int)((short)p_11) - 2320));
  v_7 = 232;
  v = (unsigned char)(((long long)v_7 + ! p_5[1][1]) % 545355185LL ^ - (
                      (long long)(-23227 + (int)v) + p_5[2][4] % 24159LL));
  result = (unsigned char)(6758ULL * (unsigned long long)(0LL % (((long long)p * 60228062LL) * (
                                                                 (long long)v % (
                                                                 p_5[0][3] + 320LL)) + 145LL)));
  return result;
}


