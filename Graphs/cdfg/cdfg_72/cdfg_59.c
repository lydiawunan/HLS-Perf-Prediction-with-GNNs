#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656637007
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned short p_5[1][3], unsigned int p_9[2][5],
                  long long p_11, unsigned long p_21[4][3][1])
{
  long v_19;
  short v_17;
  unsigned int v_15;
  unsigned long v_13;
  long long v_7;
  long long v;
  unsigned long result;
  v_19 = -858102920L;
  v_17 = (short)p_11;
  v_15 = 55367U;
  v_13 = 4294917239UL;
  v_7 = -698926205LL;
  v = -826993520LL;
  while (((v_13 + (unsigned long)v_15) | (unsigned long)(174U * (v_15 * (unsigned int)-1056297344.f))) <= 
         (unsigned long)(0 % ((int)p_5[0][1] + 683)) / 3230722747UL) {
    v_15 = (unsigned int)(~ (1LL % (v % (long long)(p_9[1][3] + 805U) + 306LL)));
    v = (long long)(~ (~ p_21[0][0][0]));
    v_13 = (unsigned long)(v_19 * (long)v_17);
  }
  while_0_break: ;
  result = (unsigned long)(~ v / ((long long)(! p) / ((long long)p_5[0][1] % (
                                                      v_7 + 569LL) + 560LL) + 958LL));
  return result;
}


