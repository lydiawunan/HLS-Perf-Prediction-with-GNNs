#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 975392672
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, unsigned long long p_4, unsigned int p_7,
          unsigned long p_9, long p_11)
{
  unsigned char v_21;
  long long v_19;
  char v_17;
  unsigned long v_15;
  double v_13;
  char v;
  float result;
  v_17 = (char)p_7;
  v_15 = p_9;
  v = (char)98;
  result = -339.818084717f;
  v_13 = (double)0UL;
  while (((18446744073709507074ULL - (unsigned long long)p) - p_4) / (unsigned long long)(
         ((unsigned long)v | 283134244UL) / ((unsigned long)p_7 / 671618281UL + 123UL) + 987UL) != (unsigned long long)(! (
         (p_9 ^ (unsigned long)p_11) % ((unsigned long)(v_13 / ((double)p + 383.)) + 806UL)))) {
    v_19 = (unsigned long)v_17 + (v_15 - 73UL);
    v_21 = (unsigned char)(- ((unsigned long long)(~ p) % ((18446744073709516984ULL ^ (unsigned long long)p_7) + 785ULL)));
    result = (float)((unsigned long long)p / (! ((unsigned long long)v_21 - p_4) + 16ULL));
    v = (char)((unsigned long long)(- (- v_13)) * (((unsigned long long)v_19 % (
                                                    p_4 + 578ULL)) * ~ p_4));
  }
  while_0_break: ;
  return result;
}


