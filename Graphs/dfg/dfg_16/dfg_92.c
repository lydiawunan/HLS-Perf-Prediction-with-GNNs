#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574854348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, char p_5[1][3], short p_13, unsigned long p_15,
              unsigned short p_17)
{
  short v_19;
  long v_11;
  unsigned long long v_9;
  unsigned int v_7;
  unsigned long v;
  long long result;
  v_19 = (short)p_5[0][1];
  v_11 = 50695L;
  v_9 = (unsigned long long)p_15;
  v_7 = (unsigned int)(~ (~ (- (p / (long)((int)v_19 + 364)))));
  v_7 = (unsigned int)((unsigned long long)((((unsigned long)p_13 / (
                                              p_15 + 747UL)) % (unsigned long)(
                                             ~ v_7 + 375U)) / (unsigned long)(
                                            (v_7 - (unsigned int)((int)p_17 - -50)) + 640U)) / (
                       (18446744073187429783ULL ^ (unsigned long long)(
                        ((unsigned long)p_13 ^ p_15) / (unsigned long)(
                        (int)(~ p_13) + 875))) + 82ULL));
  v = (unsigned long)((unsigned long long)(! (! ((int)p_5[0][0] / -287036382))) / (
                      (((unsigned long long)v_7 * v_9) * (v_9 % (unsigned long long)(
                                                          (int)p_5[0][1] + 482)) - (unsigned long long)(! (! v_11))) + 200ULL));
  result = (long long)(v * ((unsigned long)(- p) + (1619UL - v)));
  return result;
}


