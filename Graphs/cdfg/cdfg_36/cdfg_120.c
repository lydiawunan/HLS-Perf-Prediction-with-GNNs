#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702082148
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, signed char p_4, unsigned long long p_6[4][4][3],
              unsigned char p_8, short p_10)
{
  signed char v_13;
  short v;
  long long result;
  v_13 = (signed char)44;
  v = (short)1497;
  result = (long long)p_8;
  while (~ (p_6[0][2][0] % (unsigned long long)(((int)p_4 + (int)v) + 1021)) > (unsigned long long)p_10) {
    v = (int)v_13 / 49;
    v_13 = (signed char)(! (- ((int)p_10 + (int)v)));
    result = (long long)(- (- (! (char)48)));
    v = (short)(((int)((signed char)(- p)) / -25) / ((int)(- (p + 1.84467440737e+19f)) + 237));
  }
  while_0_break: ;
  result = - ((long long)((unsigned long)p | 802395471UL) / (! result + 440LL));
  return result;
}


