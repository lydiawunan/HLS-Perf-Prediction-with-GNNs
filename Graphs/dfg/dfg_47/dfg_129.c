#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918662631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p[4][1][1], signed char p_5, unsigned short p_13)
{
  unsigned long long v_15;
  double v_11;
  unsigned short v_9;
  signed char v_7;
  long v;
  short result;
  v_15 = (unsigned long long)p_5;
  v_9 = (unsigned short)p[2][0][0];
  v_7 = p_5;
  v = 729201417L;
  result = (short)v_9;
  v_11 = (double)(((long long)(- ((int)v_7 % ((int)p_13 + 617))) - 653584295LL) << (
                  ~ ((unsigned long long)((long long)result - 60293LL) % (
                     v_15 + 161ULL)) & 63ULL));
  v_7 = (signed char)((double)(~ (! (p[0][0][0] % ((long long)v_11 + 836LL)))) * (
                      (double)((unsigned long long)p_5 % 54027ULL & (unsigned long long)(
                               (int)p_13 - (int)p_13)) / (2.56111943138e+38 * (double)(
                                                          p[3][0][0] * p[0][0][0]) + 298.)));
  result = (short)(! (! ((long long)result % (p[1][0][0] + 936LL))) * (long long)(
                   (int)(-62421782528.f - (float)(v / (long)((int)p_5 + 859))) + (
                   (int)(- v_7) + (int)v_9)));
  return result;
}


