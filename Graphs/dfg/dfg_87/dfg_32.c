#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 777765780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, char p_4, char p_6, unsigned short p_9,
           unsigned long p_11[1])
{
  unsigned long v_19;
  unsigned long long v_17;
  unsigned long long v_15;
  long v_13;
  long v;
  double result;
  v_19 = (unsigned long)p_9;
  v_17 = 1042357631ULL;
  v_15 = 42323ULL;
  v = (long)p;
  v_15 = ((unsigned long long)v + ((unsigned long long)p_4 - ((unsigned long long)p_6 ^ v_17))) + ! (
         (unsigned long long)3.36148259148e+37f % (v_15 / (unsigned long long)(
                                                   v_19 + 565UL) + 796ULL));
  v_13 = (long)(! (~ (v_15 << ((int)p & 63))) & v_15);
  v = (long)(! (~ p_11[0] / (((unsigned long)(~ v_13) | ((unsigned long)p_4 - p_11[0])) + 995UL)));
  result = (double)(((long long)p % (((long long)p_4 & 4404129009428856832LL) + 676LL)) * (long long)(
                    (long)(! p_6) / (! (v * (long)p_9) + 509L)));
  return result;
}


