#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 370163365
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, long p_5[2][1][5], double p_7, short p_9[5][2][3],
              signed char p_11[5][4])
{
  unsigned char v_21;
  long v_19;
  unsigned char v_17;
  int v_15;
  double v_13;
  unsigned long long v;
  long long result;
  v_17 = (unsigned char)37;
  v_15 = 39157;
  v_13 = (double)p_9[4][0][1];
  v = 18446744073709507785ULL;
  while ((double)(p_5[0][0][2] & 7004L) == (double)((unsigned long long)(
                                                    (int)((short)p_7) / (
                                                    (int)p_9[3][0][0] + 533)) / (
                                                    - v + 699ULL)) * (
                                           (double)((int)p_11[4][1] - 762069524) - - v_13)) {
    v_21 = (long)v_17 % ((long)v_15 * -372129430L + 744L);
    v_17 = (unsigned char)0;
    v_19 = ~ (24573L + p_5[1][0][1]);
    v_13 = (double)((unsigned long long)(-58697234684.5 / ((double)((long)v_17 | v_19) + 63.)) * 18446744073709540163ULL);
  }
  while_0_break: ;
  result = (long long)(v / ((unsigned long long)p + 456ULL));
  return result;
}


