#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 819867167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, int p_7, unsigned long long p_13[2][1][2])
{
  char v_17;
  signed char v_15;
  short v_11;
  unsigned long v_9;
  int v_5;
  unsigned int v;
  long long result;
  v_17 = (char)-7;
  v_15 = (signed char)p;
  v_11 = (short)-15418;
  v_5 = 12554;
  v = 3948646155U;
  result = -632507839LL;
  v_9 = (unsigned long)((unsigned long long)(~ (- v_17)) / (! p_13[0][0][0] % (unsigned long long)(
                                                            ! p + 235) + 811ULL) - (
                        (unsigned long long)v_15 + ((unsigned long long)p_7 * 18446744073694527719ULL - (unsigned long long)v)));
  v_17 = (char)0;
  v = (unsigned int)((long long)((unsigned long)((p - v_5) % ((p + 14) + 688)) | (
                                 (unsigned long)p_7 + ! v_9)) + (long long)(
                                                                (double)(
                                                                (unsigned long long)v_11 + p_13[1][0][1]) * (
                                                                (double)v_15 * 7649090403.34)) % (
                                                                - result / (long long)(
                                                                (int)v_17 % 19160 + 10) + 621LL));
  result = (long long)(~ ((unsigned long)v - 622738386UL));
  return result;
}


