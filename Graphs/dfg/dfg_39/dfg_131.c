#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944459918
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, double p_7, long p_9, long long p_13[2],
                 char p_17)
{
  unsigned int v_15;
  unsigned short v_11;
  long v_5;
  unsigned short v;
  unsigned int result;
  v_11 = (unsigned short)p_9;
  v_5 = (long)p_7;
  v = (unsigned short)p_13[1];
  result = (unsigned int)p_7;
  v_15 = (unsigned int)v / ((((unsigned int)3.34842888337e+38f % (result + 402U)) * (unsigned int)(! v)) % (unsigned int)(
                            (int)(~ p_17) + 672) + 61U);
  result = (unsigned int)((long long)v_11 / (((p_13[0] - (long long)v_15) - (long long)p_17) * 44899LL + 245LL));
  v = (unsigned short)(((4294953789U | ~ result) >> ((4294914585UL % (unsigned long)(
                                                      result + 322U) + 
                                                      (unsigned long)p % (unsigned long)(
                                                      v_5 + 219L)) & 31UL)) & (unsigned int)(
                       ! (35125 % ((int)v + 525)) << (- (v_5 % (p_9 + 533L)) & 31L)));
  result = ~ (((p | (unsigned int)v) * 56874U) % ((unsigned int)((double)(
                                                                 v_5 * (long)p_7) / (
                                                                 - p_7 + 461.)) + 451U));
  return result;
}


