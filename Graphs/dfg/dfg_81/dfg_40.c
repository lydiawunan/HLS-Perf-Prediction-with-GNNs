#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 37952119
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, unsigned short p_7,
                   unsigned long long p_9[1][2], signed char p_15, long p_19)
{
  short v_21;
  int v_17;
  unsigned short v_13;
  unsigned long long v_11;
  char v_5;
  short v;
  unsigned short result;
  v_21 = (short)25093;
  v_17 = 39601;
  v_13 = (unsigned short)46760;
  v_11 = 200397853ULL;
  v = (short)21828;
  v_5 = (char)(((unsigned long long)(-1373 - 12495 * (int)p_7) * 18446744073709551615ULL) * (unsigned long long)v_13);
  v_11 = (unsigned long long)p_15 / ((((unsigned long long)v_21 % (v_11 + 298ULL)) / (unsigned long long)(
                                      (int)p_15 + 1)) % (unsigned long long)(
                                     (int)(! p_15) + 673) + 180ULL);
  v_5 = (char)((unsigned long long)((long long)v_17 / ((52522LL - (long long)v_5) * (long long)(
                                                       -17754L + p_19) + 452LL)) * - (
               18446744073497044258ULL * (unsigned long long)(! v)));
  result = (unsigned short)(((int)((short)(- p)) ^ (int)(! (- v))) + (int)(
                            (float)((unsigned long long)v_5 * ((unsigned long long)p_7 * p_9[0][0])) * (
                            ((float)v_11 + -2.94505353811e+38f) + (float)(
                            (int)v_13 - (int)p_15))));
  return result;
}


