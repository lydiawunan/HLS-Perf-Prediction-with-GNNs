#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 351859383
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned char p_5[1], signed char p_9, unsigned int p_11)
{
  unsigned long v_15;
  unsigned short v_13;
  unsigned long v_7;
  double v;
  double result;
  v_15 = (unsigned long)p_5[0];
  v_13 = (unsigned short)(p_11 - 4294967190U);
  v = (double)((unsigned long)(- (! p_11) + ((unsigned int)v_13 * p_11) % (
                                            (unsigned int)-9.7245118236e+37f + 804U)) + v_15);
  v_7 = (unsigned long)p_11;
  result = (double)(~ ((unsigned long)((int)(- v) % (~ p + 69)) % (((unsigned long)p_5[0] * v_7 + (
                                                                    (unsigned long)p_9 + v_7)) + 820UL)));
  return result;
}


