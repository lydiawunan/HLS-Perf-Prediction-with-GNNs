#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225717953
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, double p_5[3][4],
                       unsigned long long p_9, unsigned short p_11,
                       unsigned short p_15)
{
  short v_23;
  unsigned long v_21;
  int v_19;
  double v_17;
  short v_13;
  int v_7;
  short v;
  unsigned long long result;
  v_23 = (short)p;
  v_21 = (unsigned long)p_15;
  v_19 = (int)p_9;
  v = (short)p_11;
  result = (unsigned long long)p_11;
  v_17 = (double)v_23;
  v_7 = (int)(result * (unsigned long long)((double)((int)p_11 - 150) + (
                                            v_17 + (double)v_19)) + (
              (unsigned long long)((unsigned long)p ^ v_21) / 643486220ULL >> (
              ((unsigned long long)(v_19 << ((int)v_23 & 31)) + ~ result) & 63ULL)));
  v_13 = (short)(~ p_15);
  result = ((unsigned long long)(! v) ^ (unsigned long long)((int)p * (int)((signed char)p_5[0][3])) / (
                                        (unsigned long long)v_7 / (p_9 + 973ULL) + 679ULL)) - (unsigned long long)(
           (int)(! p) % (((int)p_11 & -20600) % ((int)v_13 + 411) + 554));
  return result;
}


