#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340326281
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, double p_5, double p_9)
{
  long long v_11;
  unsigned short v_7;
  short v;
  int result;
  v_11 = 645707873LL;
  v_7 = (unsigned short)p_9;
  result = (int)v_11;
  result = - result;
  v = (short)(- result);
  result = (int)((p * (unsigned int)v - (unsigned int)(- p_5)) / (unsigned int)(
                 (int)v_7 + 55) - (unsigned int)(- (3306381584. / (- p_9 + 127.))));
  return result;
}


