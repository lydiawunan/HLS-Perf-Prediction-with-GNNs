#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299541392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, signed char p_9, unsigned long p_13, char p_15)
{
  unsigned int v_23;
  double v_21;
  long v_19;
  unsigned char v_17;
  long v_11;
  char v_7;
  unsigned long long v_4;
  char v;
  float result;
  v_21 = (double)p_15;
  v_19 = -1052245501L;
  v_17 = (unsigned char)131;
  v_11 = (long)p_9;
  v_7 = p_15;
  v_4 = 18446744073231393038ULL;
  while ((int)(1089373056.f - (float)(! (~ p_13))) > ((-13 * (int)p_15) / (
                                                      (int)(! p_15) + 444) & (int)(! v_17))) {
    v_23 = v_19 * 113L;
    v_7 = (char)(- ((int)p_15 * (int)((char)-817.283874512f)) * ((int)v_7 >> (
                                                                 p_13 & 7UL)));
    v_4 = 18446744073202863502ULL;
    v_17 = (unsigned char)((p_13 | 4294950709UL) / (unsigned long)((int)p_9 / (
                                                                   (int)((signed char)v_21) + 339) + 724) + (
                           4294911502UL + ((unsigned long)v_23 + p_13)));
  }
  while_0_break: ;
  if ((long)((int)(! (- v_7)) * (int)((char)(0. - 634.016270678 * (double)v_4))) == ! (
      (long)(! p_9) % (- v_11 + 664L))) {
    v = (char)(- v_4 * 60088ULL);
    result = (float)(~ (18446744072914454134ULL - (unsigned long long)v));
    result = result;
  }
  else {
    v = (char)55;
    result = (float)((int)(~ (~ p)) + ! ((int)p * (int)v));
  }
  return result;
}


