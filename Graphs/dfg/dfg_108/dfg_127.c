#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 104667184
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, char p_7, short p_9, double p_15[4])
{
  short v_13;
  unsigned long v_11;
  unsigned long long v_4;
  unsigned short v;
  unsigned long long result;
  v_13 = (short)7939;
  v_11 = (unsigned long)p_15[3];
  v_4 = 197ULL;
  result = (unsigned long long)p_15[3];
  v = (unsigned short)((unsigned long long)(~ ((int)p_7 << ((int)p_9 & 7))) / (
                       ((unsigned long long)v_11 / (result + 182ULL) & (unsigned long long)(
                        991219063U + (unsigned int)v_13)) + 202ULL) + (unsigned long long)(! (! (
                       -31062 % ((int)((short)p) + 211)))));
  result = ~ (~ (((unsigned long long)v + v_4) * (unsigned long long)(
                 p - 58603.)));
  return result;
}


