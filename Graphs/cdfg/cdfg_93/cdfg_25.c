#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 451911872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned int p_4, int p_7,
                       unsigned long long p_11, unsigned long p_13)
{
  unsigned short v_21;
  unsigned short v_19;
  short v_17;
  short v_15;
  float v_9;
  unsigned short v;
  unsigned long long result;
  v_19 = (unsigned short)p_4;
  v_17 = (short)-22337;
  v_15 = (short)28799;
  v_9 = -64.903465271f;
  v = (unsigned short)56994;
  result = 18446744073709541188ULL;
  while ((unsigned long long)((int)v_15 * (int)(! v)) % (~ p + 370ULL) > 44325ULL) {
    v_21 = (int)v_19 + 15;
    v = (unsigned short)(-1061259720LL / (long long)(((int)((float)v_17 * v_9) - 
                                                      (int)v_21 % 11443) + 394));
    result = (unsigned long long)((v_9 + (float)(49197UL * (unsigned long)v)) * (float)(! (
                                  (long)v_15 * 292465602L)));
    v = (unsigned short)((int)v_21 / 321);
  }
  while_0_break: ;
  if (result > (unsigned long long)(~ p_13)) result = 18446744073701809919ULL - (
                                                      p % (unsigned long long)(
                                                      p_4 + 896U) + (unsigned long long)4.25486891413e+37);
  else {
    v = (unsigned short)((unsigned long long)p_7 % ((unsigned long long)v_9 * (
                                                    p_11 + 627837811ULL) + 501ULL));
    result = (unsigned long long)(! v);
    result = ! (~ result) + ~ (- result);
  }
  return result;
}


