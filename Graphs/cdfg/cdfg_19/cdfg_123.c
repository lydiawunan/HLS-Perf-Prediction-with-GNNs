#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 747487331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned long long p_4, int p_7[4][1],
                   unsigned long long p_11, double p_15)
{
  int v_21;
  double v_19;
  unsigned long long v_17;
  long v_13;
  unsigned int v_9;
  double v;
  unsigned short result;
  v_21 = 213116163;
  v_19 = 51.0257128131;
  v_17 = 18446744073709528688ULL;
  v_13 = 28778L;
  v_9 = 4096162742U;
  v = (double)p_4;
  result = (unsigned short)p_7[0][0];
  if ((double)(~ (v_17 / (unsigned long long)((int)result + 496)) / 18446744073709551543ULL) == v_19) {
    v = (double)(-7183032320.f - (float)((p_4 - (unsigned long long)v) / (unsigned long long)(
                                         (p_7[1][0] + 123) + 488)));
    v = - v - (double)(~ (v_21 + (int)p_15));
    v_19 = (double)((91 + (int)((char)p_15)) / 303 | (int)v_19);
  }
  else {
    v_9 = (unsigned int)(((p_11 - (unsigned long long)-382.535522461f) + 7735ULL) / 18446744073524262040ULL);
    result = (unsigned short)((! p_11 ^ - p_4) + (unsigned long long)(
                                                 (float)p_4 * -6.89177719927e+37f) / (
                                                 ((unsigned long long)v_21 - p_11) + 623ULL));
    v = (double)(~ 3891397682UL);
  }
  while ((unsigned long long)(! (-33511 & p)) + (! p_4 >> (((int)result + (int)result) & 63)) >= (
         (unsigned long long)((long long)(v * (double)result) * (-15870LL * (long long)p_7[2][0])) & 
         ((unsigned long long)v_9 - p_11) % (unsigned long long)((int)(~ result) + 69))) {
    v_17 = v_13 + 37499L;
    result = (unsigned short)v_17;
    v_13 = (long)(63ULL / (! (v_17 / ((unsigned long long)v_19 + 803ULL)) + 915ULL));
    v_9 = (unsigned int)((unsigned long long)((p_15 * p_15) * (double)(
                                              (int)((char)v) << 2)) + v_17);
  }
  while_0_break: ;
  return result;
}


