#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735357407
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned long p_5, long p_9, long long p_11,
           signed char p_13)
{
  char v_21;
  unsigned long long v_19;
  unsigned short v_17;
  unsigned int v_15;
  char v_7;
  long v;
  double result;
  v_21 = (char)p_13;
  v_19 = 18446744073481608638ULL;
  v_17 = (unsigned short)p_13;
  v_15 = (unsigned int)p_9;
  v = -17615L;
  result = (double)(((unsigned long long)((long long)((unsigned long)v_15 * p_5) + - p_11) - (
                     (unsigned long long)(-958 - (int)v_17) + (v_19 << (
                                                               p_9 & 63L)))) - (unsigned long long)(
                    (long long)(! (v * (long)v_21)) - ! (p_11 * 78LL)));
  v_7 = (char)(((double)(- p) + result) * (double)p_13 + 166.);
  v = (long)(- ((double)(! ((long long)p_9 / (p_11 + 786LL))) + -9358193830.57));
  result = (double)((long long)(((unsigned long)(-1785 >> ((int)p & 15)) - 
                                 3874486220UL / (unsigned long)(v + 45L)) / (
                                (unsigned long)(((double)p_5 + result) - (
                                                -1.32072661279e+38 + (double)p_5)) + 427UL)) + 
                    (long long)(19 + (int)v_7 * -52) / (((long long)(- p_9) | (
                                                         (long long)v - 643043624LL)) + 985LL));
  return result;
}


