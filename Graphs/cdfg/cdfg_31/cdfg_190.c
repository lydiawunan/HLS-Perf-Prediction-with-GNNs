#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 782542458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p[5], signed char p_4, int p_6[2][4], int p_11,
                   unsigned int p_15[5][3])
{
  char v_21;
  unsigned char v_19;
  short v_17;
  long long v_13;
  double v_9;
  char v;
  unsigned short result;
  v_21 = (char)p_4;
  v_19 = (unsigned char)61;
  v_13 = -604010079LL;
  v_9 = 9049413644.08;
  v_17 = (short)((int)v_21 + (p_11 / ((int)p_4 + 579) - (int)(v_9 * -604342769.)));
  if ((unsigned int)(- (! v_19)) <= p_15[4][0] % (unsigned int)(! (66 + (int)p[0]) + 452)) {
    result = (unsigned short)(~ (~ (~ -14710LL)));
    result = (unsigned short)(((unsigned long long)(7752845312.f - (float)result) + (
                               (unsigned long long)p[1] ^ 18446744073434020774ULL)) >> (
                              ((long long)(- p_4) + ((long long)p_6[0][3] - 3112LL)) & 63LL));
  }
  else {
    v = (char)(- ((4294921867UL ^ (unsigned long)p_15[4][2]) * (unsigned long)(
                  (int)v_17 * 44501)));
    v_9 = - ((v_9 - (double)v_13) / ((double)p_15[1][0] + 466.));
    result = (unsigned short)(- ((double)v + v_9) / ((double)((unsigned long long)(
                                                              83 + p_11) * 18446744073601543828ULL) + 558.));
  }
  return result;
}


