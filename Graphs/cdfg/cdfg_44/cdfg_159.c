#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 426247043
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, long p_4, unsigned long long p_6, long long p_11,
                 unsigned long long p_19)
{
  unsigned int v_21;
  unsigned short v_17;
  short v_15;
  unsigned int v_13;
  unsigned long long v_9;
  unsigned short v;
  unsigned int result;
  v_21 = (unsigned int)p_19;
  v_17 = (unsigned short)14566;
  v_15 = (short)p_11;
  v_13 = (unsigned int)p_4;
  v_9 = 18446744073709521043ULL;
  v = (unsigned short)51706;
  result = (unsigned int)p_11;
  while (0ULL != (unsigned long long)(768932464U % (unsigned int)((int)p + 724) ^ 28035U) - (
                 ((unsigned long long)v + p_19) + (unsigned long long)(
                 -12 % ((int)v + 379)))) {
    v_15 = v_21 / 56U;
    result = (unsigned int)(- (- p_6 / 586162061ULL));
    v_13 = (unsigned int)((~ v_9 - (p_19 + (unsigned long long)p_4)) - (unsigned long long)(
                          (int)p % ((int)(! v) + 804)));
    v = (unsigned short)(! v_15);
  }
  while_0_break: ;
  if ((unsigned long long)((float)(~ (134844439UL + (unsigned long)v_15)) * (
                           3.33951679259e+38f * (float)p_4)) > (unsigned long long)(
                                                               p_11 % (long long)(
                                                               (int)v_17 + 326)) * (
                                                               (335906794ULL - p_19) ^ (unsigned long long)p_4)) 
    result = (unsigned int)(0 % (unsigned long long)(((long)p + -843249874L) + 835L) | 
                            ((unsigned long long)p_4 - p_6) * 85ULL);
  else {
    v_9 = ~ (~ v_9) + 18446744073709526128ULL / (unsigned long long)(
                      result + 146U);
    result = (unsigned int)(((unsigned long long)result / ((unsigned long long)p_4 / 18446744073709493777ULL + 906ULL)) / 29293ULL);
    result = (unsigned int)(((unsigned long long)(~ v) - v_9) >> ((p_11 % (long long)(
                                                                   v_13 + 296U) - (long long)result) & 63LL));
  }
  return result;
}


