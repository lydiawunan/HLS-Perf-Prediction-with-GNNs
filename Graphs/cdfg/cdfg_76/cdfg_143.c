#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1023965453
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned long p_7, unsigned long p_11, double p_15)
{
  unsigned char v_13;
  long v_9;
  unsigned short v_4;
  short v;
  double result;
  v_13 = (unsigned char)227;
  v_4 = (unsigned short)18984;
  v = (short)p_15;
  result = (double)p_11;
  v_9 = -781303000L;
  while (! ((unsigned long)((int)v % ((int)v_4 + 349)) + (unsigned long)p / (
                                                         p_7 + 755UL)) == 4294967212UL) {
    result = v_9 + -15L;
    v_4 = (unsigned short)(- p_15);
    v_9 = (long)(((225 + (int)v_13) - (int)v) + (int)(- (- v_13)));
    v = (short)(p_11 % ((unsigned long)1.25038104116e+38f + 159UL) & (unsigned long)(
                (result + result) + (double)v));
  }
  while_0_break: ;
  return result;
}


