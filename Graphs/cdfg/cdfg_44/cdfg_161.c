#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433367957
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p[2][5], signed char p_11, unsigned long long p_19)
{
  double v_17;
  double v_15;
  unsigned long v_13;
  unsigned long v_9;
  signed char v_7;
  int v_4;
  unsigned long long v;
  char result;
  v_17 = 3.30837296377e+38;
  v_15 = (double)p_19;
  v_13 = (unsigned long)p_19;
  v_7 = (signed char)p[0][1];
  v_4 = (int)p_11;
  v = 633713414ULL;
  if ((unsigned long long)(~ p_11) <= (unsigned long long)((int)(~ p_11) + (
                                                           (int)v_7 >> 5)) - (
                                      18446744073709527640ULL - (unsigned long long)p[1][1] % (
                                                                p_19 + 529ULL))) {
    v_15 = (double)(1ULL - v);
    result = (char)p[0][3];
    v_9 = (unsigned long)result;
  }
  else {
    v_13 = ~ (((unsigned long)p_11 - 4294922168UL) + (unsigned long)p[1][3]);
    result = (char)p_11;
    v_9 = ((51621UL * v_13) / (unsigned long)((int)(! p_11) + 545)) * (unsigned long)(
          ((int)p_11 ^ -21066) - ((int)result & v_4));
  }
  while ((unsigned long long)-236.884170532f * (v - (unsigned long long)(
                                                (long)v_4 + p[1][3])) < (unsigned long long)(
         (long long)((unsigned int)v_7 * 971867432U) / ((((long long)v_9 + 30447LL) & (long long)(
                                                         (unsigned long)p_11 + v_13)) + 699LL))) {
    v_9 = v_15 - 155.;
    v_4 = (int)(~ v * (unsigned long long)((long)(v_17 + (double)p_11) * p[1][3]));
    result = (char)((long)((18213 >> 1) - (int)(~ p_11)) - - (~ p[0][0]));
    v_7 = (signed char)(! 0);
  }
  while_0_break: ;
  return result;
}


