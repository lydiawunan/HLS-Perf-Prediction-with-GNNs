#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 313482377
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[2][4], signed char p_9, double p_13,
                 unsigned long p_15)
{
  int v_11;
  int v_7;
  int v_4;
  unsigned long v;
  unsigned int result;
  v_11 = (int)p[0][0];
  v_7 = (int)p_13;
  v_4 = 42400;
  v = (unsigned long)p_13;
  v_7 = v_7;
  if ((unsigned long long)((double)(1037730763UL - ((unsigned long)v_7 + p_15)) - (
                           p_13 - (double)((unsigned long long)v_4 | 26442ULL))) <= 
      33269ULL + (429615333ULL * (unsigned long long)p[1][1]) % (unsigned long long)(
                 v_4 + 846)) {
    result = (unsigned int)(-18446744072860398247ULL);
    result = ! result;
  }
  else {
    result = (unsigned int)p_13;
    v_7 = (int)((unsigned int)((double)p_9 * 596.499619088) * ((unsigned int)(
                                                               v_11 + (int)p_9) - 
                                                               (unsigned int)p_9 / (
                                                               result + 306U)));
    result = (unsigned int)((! v + (unsigned long)(-21347 % (v_4 + 677))) ^ (unsigned long)(
                            (int)p[0][2] * v_7));
  }
  return result;
}


