#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1043392791
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, int p_4, short p_6,
                       signed char p_9[1][4][4], int p_13[1][2][4])
{
  unsigned long long v_15;
  long v_11;
  int v;
  unsigned long long result;
  result = (unsigned long long)p_4;
  v_11 = (long)(- ((long long)p_4 - 349460764LL) - (long long)p);
  v_15 = (unsigned long long)((long)p_13[0][1][2] + ~ (- v_11 % ((long)p * -764186365L + 285L)));
  v = (int)((unsigned long long)(((long)(~ p_9[0][3][1]) & -70L / (v_11 + 87L)) * (long)(- (
                                 p_13[0][0][0] >> 3))) + v_15 % ((unsigned long long)p_6 + 431ULL));
  result = (((unsigned long long)(~ p) / (result % (unsigned long long)(
                                          p_4 + 476) + 627ULL)) / (unsigned long long)(
            ((unsigned long)((unsigned int)p & 4294925955U) & 1030745779UL) + 749UL)) % (unsigned long long)(
           - (945LL / (long long)(((int)p_6 + v) + 911)) + 691LL);
  return result;
}


