#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378306999
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, signed char p_4[4][3], long p_6, int p_11, signed char p_13)
{
  double v_23;
  unsigned long long v_21;
  char v_19;
  signed char v_17;
  unsigned long v_15;
  unsigned short v_9;
  long v;
  short result;
  v_23 = -4.5551217064e+37;
  v_21 = (unsigned long long)p;
  v_19 = (char)95;
  v_17 = p_13;
  v_9 = (unsigned short)3855;
  result = (short)p_13;
  if ((3780366473U * (unsigned int)(v_23 / ((double)p_4[0][1] + 988.))) * (unsigned int)(
      36 / (p_11 + 506)) == (unsigned int)p_4[2][1]) {
    v_17 = (signed char)(((int)v_17 % ((int)p_13 + 519) + (int)(! v_9)) * (
                         (int)v_19 - p_11 / ((int)p_4[2][1] + 701)));
    v = (long)v_17;
    v_17 = (signed char)(- ((float)(-2667LL % (long long)(p_11 + 525)) / -345.830322266f));
  }
  else {
    v_17 = (signed char)(26694774ULL + (24336ULL & ! v_21));
    v = (long)p_11;
    v_9 = (unsigned short)(- (-18446744073709486279ULL));
  }
  while (p != - ((long)((int)p_4[3][1] * (int)result) * p_6)) {
    v_15 = (unsigned long)v_9 % ((unsigned long)v / 528546369UL + 526UL);
    v_9 = (unsigned short)(v_15 / (~ ((unsigned long)v_17 + 3683638816UL) + 922UL));
    v = (long)((64297UL * (unsigned long)p_11) / (unsigned long)((int)(~ p_13) + 205) ^ (unsigned long)(
               (533078425 >> ((int)p_13 & 31)) + (int)(! p_4[1][1])));
    result = (short)17827;
  }
  while_0_break: ;
  return result;
}


