#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 13682723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long long p_7, unsigned char p_11,
                   char p_15[2][3][4], char p_17)
{
  unsigned long v_29;
  int v_27;
  short v_25;
  double v_23;
  long v_21;
  long v_19;
  double v_13;
  unsigned int v_9;
  unsigned short v_4;
  long v;
  unsigned short result;
  v_29 = (unsigned long)p_7;
  v_27 = -742488419;
  v_25 = (short)7874;
  v_23 = -2.49918246651e+38;
  v_21 = 23871L;
  v_19 = 12823L;
  v_13 = -759.835613295;
  v_9 = (unsigned int)p_17;
  while ((long)(-12 % ((int)p_11 + 303)) * ! v_19 >> (! (-59994LL + p_7) & 31LL) <= (
         (long)8461939571.31 / (! v_21 + 164L) ^ (long)v_23)) {
    v_4 = (unsigned long long)v_27 + 943656964ULL;
    v_13 = (double)(0 - - ((int)p_17 | (int)v_4));
    v_25 = (short)(- ((int)p_17 % ((int)v_25 + 415) - (int)(v_13 - (double)v_29)));
    v_19 = (long)(((102 + (int)((unsigned char)v_13)) << ((int)-1.94453588063e+38 & 31)) / (
                  (((int)p_15[0][2][2] + (int)((char)780939172.14)) | -4368) + 40));
  }
  while_0_break: ;
  if (~ (~ (v_9 * (unsigned int)p_11)) == (4294963238U / ((unsigned int)(
                                                          v_13 - (double)p_7) + 136U)) * (unsigned int)(! (
                                          (int)p_15[1][2][0] * (int)p_17))) {
    v_4 = (unsigned short)1579836738.28;
    v = 0L;
    result = (unsigned short)((unsigned long)-172.146443928 % ((unsigned long)(! v) % (
                                                               (306191890UL - (unsigned long)v_4) + 513UL) + 724UL));
  }
  else result = (unsigned short)16267;
  return result;
}


