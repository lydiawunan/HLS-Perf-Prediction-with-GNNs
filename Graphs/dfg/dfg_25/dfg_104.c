#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 493606249
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, double p_5[2][2], double p_11,
                  unsigned long p_13, double p_17)
{
  unsigned long v_15;
  short v_9;
  unsigned char v_7;
  unsigned short v;
  unsigned char result;
  v_15 = (unsigned long)p_5[0][1];
  v_7 = (unsigned char)((int)(- (-98. * p_17) * (double)(~ p_13 - 4274820335UL)) * (
                        12995 - (int)(p_11 - (double)(41534UL / ((unsigned long)p_17 + 607UL)))));
  v_9 = (short)(- (- (1.0844010577e+37 * p_17) - p_17 * p_17));
  v = (unsigned short)0;
  result = (unsigned char)((double)(! (-680 - ((int)v & (int)p))) / (
                           - (- p_5[0][0] * (double)((int)v_7 * 44027)) + 925.));
  return result;
}


