#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198997836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p[3], char p_5, long p_9, unsigned int p_11,
          double p_15)
{
  long v_19;
  char v_17;
  double v_13;
  unsigned char v_7;
  long long v;
  short result;
  v_19 = (long)p_5;
  v_17 = (char)p_9;
  v_13 = 8194171981.21;
  v = (long long)((long)(- p_15) >> (((long)(! (! v_17)) - (1868L + - v_19)) & 31L));
  v_7 = (unsigned char)v_13;
  result = (short)(! ((unsigned long)((long)v_7 * p_9) * (unsigned long)(~ (
                      (unsigned int)v_7 % (p_11 + 807U)))));
  result = (short)((long long)((5810 - (int)(! p[1])) - (int)result) * (
                   (long long)(- ((int)result / ((int)p[2] + 1019))) / (
                   (v | (long long)p_5) + 856LL)));
  return result;
}


