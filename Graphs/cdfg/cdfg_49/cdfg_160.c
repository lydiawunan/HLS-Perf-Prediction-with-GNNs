#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 380192546
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[2][2][5], unsigned short p_7, unsigned int p_9,
           unsigned char p_15, long long p_19[2][5])
{
  long v_17;
  char v_13;
  short v_11;
  unsigned long long v_5;
  long v;
  double result;
  v_17 = (long)p[1][1][0];
  v_13 = (char)-77;
  v_5 = 18446744073709545560ULL;
  v = (long)p_15;
  while ((unsigned long long)-2.547896374e+38f - (v_5 + (unsigned long long)p_7) % (
                                                 (unsigned long long)-841.08416748f + 397ULL) <= (unsigned long long)p_9) {
    v_11 = (unsigned long long)v_13 + 18446744073709546589ULL;
    v_13 = (char)(! ((long long)(v % (long)((int)p[1][0][3] + 738)) / (
                     ! p_19[1][4] + 265LL)));
    v_11 = (short)(v_17 & (long)v_11);
    v_5 = (unsigned long long)(((unsigned int)p_15 * p_9) % 4294942366U << (
                               (int)p[1][0][4] & 31));
  }
  while_0_break: ;
  result = (double)v;
  return result;
}


