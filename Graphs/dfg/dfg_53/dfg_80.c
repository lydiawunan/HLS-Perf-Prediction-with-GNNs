#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468362644
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned long long p_4, short p_7,
              signed char p_9[4][4][3], unsigned long p_11)
{
  long v_15;
  short v_13;
  short v;
  long long result;
  v_15 = (long)p_7;
  v_13 = (short)p_4;
  v = (short)(- (((float)v_15 * (-9.9897205551e+37f + (float)v_15)) / (
                 (float)(p_11 * p_11) + 125.f)));
  result = (long long)((((unsigned long long)p + p_4) / 18446744073709544064ULL + (unsigned long long)(
                        (long long)(- v) / (-313217310LL % (long long)(
                                            (int)p_7 + 963) + 729LL))) % (unsigned long long)(
                       ((unsigned long)p_9[2][2][2] + ! (p_11 * (unsigned long)v_13)) + 199UL));
  result = result;
  return result;
}


