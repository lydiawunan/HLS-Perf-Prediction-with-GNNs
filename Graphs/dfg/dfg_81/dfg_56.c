#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167779627
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, signed char p_4, double p_9, signed char p_11)
{
  short v_7;
  unsigned long long v;
  short result;
  v_7 = (short)(~ 35937);
  v = (unsigned long long)(- (~ ((int)(31. / (p_9 + 597.)) % (((int)p_11 - (int)p_4) + 153))));
  result = (short)((((unsigned long long)((int)p * (int)p_4) / (v + 197ULL)) / (unsigned long long)(
                    (int)v_7 + 851)) * 153ULL);
  return result;
}


