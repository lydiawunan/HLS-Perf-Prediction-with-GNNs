#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 866088556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p[5][3], unsigned char p_5, unsigned int p_9,
                       double p_13, unsigned long p_15)
{
  float v_21;
  unsigned char v_19;
  unsigned short v_17;
  unsigned char v_11;
  char v_7;
  long long v;
  unsigned long long result;
  v_19 = (unsigned char)p[2][1];
  v_17 = (unsigned short)p_5;
  v_11 = (unsigned char)129;
  v_7 = (char)p_9;
  v = (long long)p[0][1];
  while (0LL == v) {
    v_19 = (unsigned long)v_19 / 408572556UL;
    v_21 = (float)(- (~ 160485UL));
    v_17 = (unsigned short)(- ((double)v_21 - (72. + p_13)));
    v = (long long)(~ (~ v_11));
  }
  while_0_break: ;
  if (~ (! (32 << (p_9 & 7U))) == (int)(! (~ (~ v_17)))) {
    v = - ((long long)p_9 % (19564LL / (long long)((int)v_11 + 1015) + 455LL));
    result = (unsigned long long)(((v + 874819710LL) | (long long)p[0][1]) % (
                                  ((long long)((int)p_5 - 10063) + -33557LL * (long long)v_7) + 437LL));
    result = result;
  }
  else result = (unsigned long long)(p_13 / ((double)p_15 + 809.));
  return result;
}


