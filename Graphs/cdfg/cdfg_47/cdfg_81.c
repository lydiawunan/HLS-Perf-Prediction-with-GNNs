#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194598305
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, long long p_5[5][3][1],
                   unsigned short p_9, char p_11[4][5][2],
                   signed char p_13[2])
{
  int v_15;
  unsigned int v_7;
  unsigned long v;
  unsigned short result;
  v_15 = (int)p_5[4][1][0];
  if ((unsigned long long)p_5[1][1][0] != (~ p - (unsigned long long)(
                                           p_5[1][2][0] / (long long)(
                                           v_15 + 56))) - (unsigned long long)(
                                          (long long)(-601.967268824 - (double)p_5[4][2][0]) / (
                                          (p_5[3][1][0] + (long long)p_11[0][0][1]) + 400LL))) {
    v_7 = (unsigned int)((long)(! (! p_9)) + 29087L);
    v = (unsigned long)((unsigned long long)(121204LL / (long long)((
                                                                    98875424U << (
                                                                    p & 31ULL)) + 185U)) * p);
  }
  else {
    v_7 = 122U;
    v = (unsigned long)((22147LL - (long long)((int)p_11[1][4][1] + (int)p_13[0])) % (
                        - (p_5[3][0][0] % 117LL) + 417LL));
  }
  result = (unsigned short)((unsigned long long)(v - 3960068164UL) / (
                            ! p + 724ULL) >> ((unsigned long long)(p_5[3][2][0] * (long long)v_7) % (
                                              ! p + 577ULL) & 63ULL));
  return result;
}


