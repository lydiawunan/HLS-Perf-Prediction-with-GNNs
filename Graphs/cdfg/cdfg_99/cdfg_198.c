#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 516105824
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, signed char p_7[2][5], long long p_9,
           unsigned long long p_15, unsigned int p_17)
{
  unsigned long v_19;
  long long v_13;
  long v_11;
  long v_5;
  unsigned long v;
  double result;
  v_19 = 3531770679UL;
  v_13 = -9627LL;
  v_11 = 19443L;
  v_5 = 13986L;
  v = 4294907080UL;
  if ((unsigned long long)(- (p_9 | -623734076LL)) == (unsigned long long)v_13 * - (~ p_15)) {
    v_5 -= v_11;
    v_5 = (long)((~ p_9 - (long long)v_5) * 50377LL);
    v = ! (p * 4294967243UL) << (((long long)(v_5 ^ (long)p_7[0][1]) & 
                                  p_9 * (long long)v) & 31LL);
  }
  else {
    v_13 = (long long)(((-9305618461.42 - (double)p_17) - (double)v_19) + (double)p);
    result = (double)(! (~ ((unsigned long long)v_13 % (p_15 + 110ULL))));
    v = 5UL + (p / 7709UL) * (unsigned long)(-708247569. + result);
  }
  result = (double)(- (4294967240UL - p) - ! v);
  return result;
}


