#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783493816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, short p_13, char p_15)
{
  char v_19;
  unsigned long long v_17;
  int v_11;
  int v_9;
  double v_7;
  long v_4;
  unsigned long v;
  char result;
  v_19 = (char)p;
  v_17 = 5541ULL;
  v_11 = 3833;
  v_9 = (int)p_15;
  v_7 = 4329670256.29;
  v_4 = (long)p_13;
  v = (unsigned long)p;
  result = (char)-26;
  while ((unsigned long long)(! (~ (! result))) >= ! (64566ULL - (unsigned long long)(
                                                      -50222LL * (long long)v_7))) {
    v = v_17 % 50ULL;
    v_17 = (unsigned long long)(~ ((unsigned int)((int)result + (int)v_19)));
    v_11 = (int)(0UL - v);
    result = (char)(- p_13);
  }
  while_0_break: ;
  while ((long long)(57UL / ((3652UL + v) + 986UL)) >= (-932354874LL % (long long)(
                                                        (int)result + 1017) + (long long)(
                                                        v_4 >> (p & 31L))) - (long long)v_7) {
    v_11 = (unsigned long long)v_11 / (((unsigned long long)v_9 & 26871ULL) + 887ULL);
    v_9 = (int)(v * ((151UL + v) / (((unsigned long)p_15 | 34661UL) + 524UL)));
    result = (char)(-33 * (- v_9 * (int)(! result)));
    v_4 = ! ((long)p_13 - p) + (long)p_13;
  }
  while_0_break_0: ;
  return result;
}


