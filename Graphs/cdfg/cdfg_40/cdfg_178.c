#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448052083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned char p_7, unsigned long p_9,
           long long p_13, long p_15)
{
  unsigned short v_11;
  long v_5;
  unsigned long v;
  double result;
  v_11 = (unsigned short)p_15;
  v = (unsigned long)p;
  result = (double)p_9;
  v_5 = (long)p_13;
  while (- result < (double)(((unsigned long)p * v + (unsigned long)v_5) * (unsigned long)(
                             (-213.494049072f + (float)p_7) / ((float)(
                                                               3895676969UL / (
                                                               p_9 + 86UL)) + 593.f)))) {
    result = (int)v_11 * 11662;
    v_11 = (unsigned short)((long long)(- p_15) * (p_13 & p_13) + (long long)(
                            (p_9 + 3344081271UL) / (unsigned long)((int)(~ p_7) + 446)));
    v_5 = (long)p_13;
    v = (unsigned long)(~ (-35979LL * p_13) ^ -12459544704621LL / (long long)(
                                              (int)(! v_11) + 160));
  }
  while_0_break: ;
  return result;
}


