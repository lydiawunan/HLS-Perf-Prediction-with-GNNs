#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 804500017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, int p_4, short p_9[4][2][4], unsigned int p_11,
          short p_13)
{
  unsigned char v_17;
  signed char v_15;
  double v_7;
  unsigned long v;
  short result;
  v_17 = (unsigned char)p_13;
  v_15 = (signed char)p_13;
  v_7 = (double)(((int)v_15 % ((int)v_15 + 995)) / ((int)p_9[2][0][0] + 714) - (
                 ((int)v_17 + 17124) + (int)p_9[2][1][1] * (int)p_9[0][0][1]));
  if ((long long)(- ((int)v_15 / ((int)p_9[0][0][2] + 900)) << ((unsigned int)(~ p_9[3][1][0]) % (
                                                                p_11 + 562U) & 31U)) == - (
      -3335850450LL >> 49LL)) {
    v = (unsigned long)(- (- (- v_7)));
    result = (short)(~ p / (long long)(((unsigned long)p_4 + ~ v) + 819UL));
    result = result;
  }
  else result = (short)(((unsigned int)(p_4 - (int)p_9[1][0][1]) - (p_11 - (unsigned int)p_13)) + (unsigned int)(
                        (float)p / -4.54200477712e+37f - -42318.f));
  return result;
}


