#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572251139
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, double p_7, unsigned long long p_9, long p_15,
           int p_17)
{
  signed char v_21;
  unsigned char v_19;
  short v_13;
  char v_11;
  int v_4;
  unsigned long v;
  double result;
  v_21 = (signed char)p;
  v_19 = (unsigned char)43;
  v_13 = (short)p_9;
  v_11 = (char)-38;
  v = (unsigned long)p_7;
  v_4 = (int)(! ((unsigned long)p_15 * (61470UL + v)) + (unsigned long)(~ (
              (int)(! v_19) + (int)v_21)));
  v = (unsigned long)(- (p_17 + (v_4 + (int)v_13)));
  v_4 = (int)(((~ p_9 ^ (unsigned long long)(v * (unsigned long)v_11)) * (
               (unsigned long long)v_13 / 64735ULL - 4000ULL)) % (unsigned long long)(
              - (p_15 | (long)p_17) + 935L));
  result = (double)((~ v * (unsigned long)-499.237435405) * (unsigned long)v_4 >> (
                    ((int)p ^ (int)((unsigned char)(9. / (- p_7 + 266.)))) & 31));
  return result;
}


