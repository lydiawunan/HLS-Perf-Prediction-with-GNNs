#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557611314
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, short p_5, double p_9[1][3])
{
  unsigned char v_7;
  unsigned long v;
  unsigned int result;
  v_7 = (unsigned char)p;
  v = (unsigned long)p_5;
  result = 101616140U;
  result = (unsigned int)(((int)v_7 + -4331) % ((int)(-6.3776253444e+37 / (
                                                      (double)result + 445.)) + 554) ^ (int)(
                          (double)((int)p_5 * 14340) - p_9[0][1]));
  result = (unsigned int)(- (v >> (result & 31U)) - (unsigned long)(33822 + (
                                                                    (int)((short)p) + (int)p_5)));
  return result;
}


