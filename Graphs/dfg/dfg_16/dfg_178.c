#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253612747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[5][2], float p_7, long long p_9, unsigned char p_11,
         unsigned char p_13[5])
{
  int v_21;
  int v_19;
  unsigned char v_17;
  short v_15;
  double v_5;
  unsigned long v;
  char result;
  v_21 = -638525628;
  v_19 = (int)p_7;
  v_17 = p_11;
  v_15 = (short)p_9;
  v = 4294931127UL;
  v_5 = (double)(- ((int)v_15 / ((int)v_17 + 547)) % ((int)p_7 + 50) | 
                 v_19 % (! v_21 / ((int)p_11 + 572) + 332));
  result = (char)p_13[2];
  result = (char)((long long)(((unsigned long)p[0][1] + v) << ((p_9 % (long long)(
                                                                (int)result + 894) - (long long)(- p[3][0])) & 31LL)) * (
                  - p_9 + (long long)(~ ((unsigned long)p_11 + 13263UL))));
  result = (char)((double)(! v | (unsigned long)(1.06746189908e+38f * (
                                                 p[3][0] * (float)result))) + (
                  - v_5 + (double)(- (- p_7))));
  return result;
}


