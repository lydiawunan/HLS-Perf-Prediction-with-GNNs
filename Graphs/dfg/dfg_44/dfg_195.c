#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 498965546
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long long p_4, short p_7, short p_11,
          unsigned int p_13[1][5])
{
  long v_21;
  long long v_19;
  unsigned short v_17;
  long long v_15;
  char v_9;
  unsigned short v;
  float result;
  v_21 = (long)p;
  v_19 = 627986506LL;
  v_17 = (unsigned short)25566;
  v_15 = 1028161201LL;
  v_9 = (char)-83;
  v = (unsigned short)49103;
  result = (float)p_4;
  v_15 = (long long)(((double)p_4 / 8.09580282403e+37) / ((double)(! v_15) + 779.) + (double)(
                     (int)v + ((int)v_17 + (int)v_9))) + (long long)p_11 / (
                                                         (v_19 * (long long)p) / (long long)(
                                                         ((long)p_7 ^ v_21) + 954L) + 246LL);
  v = (unsigned short)(((unsigned long long)((unsigned int)((int)p_11 - 10839) + p_13[0][4]) + 
                        (unsigned long long)v_15 * 63483044701120ULL) / (unsigned long long)(
                       ~ ((unsigned int)result % ((unsigned int)v_9 % (
                                                  p_13[0][1] + 937U) + 851U)) + 907U));
  result = (float)((- ((int)p * (int)v_9) - (int)p_11) % -2075);
  result = (float)(((unsigned long long)((long)(- result) * (-21539L - (long)result)) + - (
                    (unsigned long long)p / (p_4 + 807ULL))) ^ (unsigned long long)(! (
                   (int)(- result) ^ (int)v * (int)p_7)));
  return result;
}


