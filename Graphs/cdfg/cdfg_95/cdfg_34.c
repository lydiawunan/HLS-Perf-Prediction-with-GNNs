#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 267947987
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned short p_5, unsigned long long p_7,
          short p_9[4], double p_11)
{
  char v_23;
  int v_21;
  char v_19;
  long long v_17;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned long long v;
  short result;
  v_23 = (char)-65;
  v_19 = (char)p_5;
  v_17 = 725731061LL;
  v_15 = (unsigned long long)p_5;
  v_13 = (unsigned short)58517;
  v = 32736ULL;
  result = (short)-29785;
  while (- (- p_11) + (double)v_13 > (double)v_15) {
    v_15 = (long long)v_19 * (v_17 + 4294932292LL);
    v_21 = (int)(12993ULL + (unsigned long long)((int)v_23 - (int)p));
    v_13 = (unsigned short)(v_15 % ((unsigned long long)v_21 * ((unsigned long long)p % (
                                                                v + 838ULL)) + 555ULL));
    v_15 = ~ (p_7 / 73ULL - (unsigned long long)(~ p_5));
  }
  while_0_break: ;
  result = (short)(((unsigned long long)((int)result % 26) - (unsigned long long)p / (
                                                             v + 960ULL)) / (
                   ((unsigned long long)result / (v + 678ULL) + (unsigned long long)(
                    (int)result | (int)p_5)) + 248ULL));
  return result;
}


