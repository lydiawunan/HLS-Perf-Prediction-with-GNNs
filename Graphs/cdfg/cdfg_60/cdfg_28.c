#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 555588823
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p[3][1], unsigned long p_7[1], int p_11[2][5],
                       signed char p_17, int p_19)
{
  char v_15;
  unsigned long long v_13;
  double v_9;
  char v_5;
  signed char v;
  unsigned long long result;
  v_15 = (char)p[1][0];
  v_13 = (unsigned long long)p_17;
  v_9 = 1857644823.97;
  if ((double)(! (! (-74 % (p_19 + 195)))) >= (double)v_13 * v_9) {
    v = (signed char)(v_13 * (unsigned long long)(- v_15));
    v_5 = (char)(- (4294957501. - (v_9 + (double)p_11[1][4])));
    result = (unsigned long long)((unsigned long)(! (p[1][0] * (long)v)) + ~ (
                                  (unsigned long)v_5 % (p_7[0] + 569UL)));
  }
  else result = (unsigned long long)(! 4294926363U);
  result = result;
  return result;
}


