#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735027355
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[3][2], char p_9, double p_11)
{
  long long v_15;
  short v_13;
  unsigned int v_7;
  int v_5;
  short v;
  long result;
  v_15 = (long long)p[1][0];
  v_13 = (short)10374;
  v_7 = 14911U;
  v_5 = 440318717;
  v = (short)p_9;
  v = (short)(- ((int)((short)((double)((int)v_13 & (int)v) - p_11)) % (
                 (int)v + 841)));
  v = (short)((unsigned long long)(((unsigned int)v * v_7 + (unsigned int)p_9 * v_7) + (unsigned int)(- (
                                   (int)((short)p_11) - (int)v_13))) % (
              (unsigned long long)v_15 / 187048792ULL + 603ULL));
  result = (long)((int)v | ! (- (v_5 * -19921)));
  result = ~ (~ (~ ((long)p[0][1] / (result + 513L))));
  return result;
}


