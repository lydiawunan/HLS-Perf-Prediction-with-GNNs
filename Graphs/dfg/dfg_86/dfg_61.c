#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531051751
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, long long p_5, long long p_13, signed char p_15,
                  double p_17[3][2])
{
  signed char v_19;
  char v_11;
  unsigned char v_9;
  unsigned long long v_7;
  long long v;
  unsigned long result;
  v_19 = (signed char)-106;
  v_11 = (char)p_5;
  v_7 = 18446744073709548507ULL;
  v_9 = (unsigned char)((unsigned long long)((double)((long long)v_11 % (
                                                      p_13 + 930LL) - (long long)(
                                                      (int)p_15 * (int)v_11)) / (
                                             p_17[1][0] + 203.)) / ((unsigned long long)(
                                                                    (int)((signed char)p_17[1][1]) / (
                                                                    (int)v_19 + 958)) * 14377ULL + 542ULL));
  result = (unsigned long)p;
  v = (long long)(((unsigned long long)(- result) - (unsigned long long)(
                                                    (float)p_5 + p) * v_7) * (unsigned long long)(
                  (float)(! (~ v_9)) * - (p / ((float)v_7 + 953.f))));
  result = (unsigned long)(- (- (- ((float)v * p))));
  return result;
}


