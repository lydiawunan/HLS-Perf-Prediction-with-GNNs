#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 594274074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[5][2], unsigned long p_9[2][3][2],
                   double p_11, unsigned int p_17[4], char p_23)
{
  unsigned long long v_21;
  long long v_19;
  double v_15;
  unsigned int v_13;
  int v_6;
  long v_4;
  unsigned char v;
  unsigned short result;
  v_21 = (unsigned long long)p[0][0];
  v_19 = -156602528LL;
  v_15 = -3.11074849608e+37;
  v_13 = 55879334U;
  v_6 = (int)p_17[3];
  v_4 = (long)p_17[0];
  v = (unsigned char)155;
  while ((unsigned int)((double)(! ((long long)p_9[0][1][0] | 943977494LL)) - 
                        (double)(v_6 ^ 67) / ((double)v_6 / (p_11 + 615.) + 6.)) < 3265752753U) {
    v_13 = (unsigned long)v_13 + 4294928315UL;
    v_19 = (long long)((unsigned long long)((long long)(p_9[1][1][0] * (unsigned long)p_23) + 
                                            (long long)p_23 / (v_19 + 300LL)) / (
                       25846ULL % (unsigned long long)(-108LL % (p[3][0] + 827LL) + 149LL) + 97ULL));
    v = (unsigned char)((unsigned long long)((long long)p_17[2] - v_19 % 86LL) * (
                        ! v_21 ^ (unsigned long long)((double)p_9[1][1][1] * v_15)));
    v_6 = (int)((-23584L & (long)(v_6 - (int)v_15)) + 2L);
  }
  while_0_break: ;
  result = (unsigned short)((((long)v - v_4) << 24U) >> (- v_6 % ((int)(~ v) + 738) & 31));
  return result;
}


