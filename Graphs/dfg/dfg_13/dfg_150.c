#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 208158381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, float p_13, short p_15, char p_21)
{
  unsigned short v_19;
  double v_17;
  unsigned char v_11;
  unsigned long v_9;
  int v_7;
  long long v_5;
  unsigned long long v;
  unsigned char result;
  v_19 = (unsigned short)p_13;
  v_17 = (double)p_13;
  v_7 = (int)p;
  v_5 = -325385757LL;
  v_11 = (unsigned char)(804726 + ((int)(- p_13 - (float)((unsigned long)p_15 & 447643420UL)) - (
                                   ((int)((short)v_17) ^ 24198) - ((int)v_19 >> (
                                                                   (int)p_21 & 15)))));
  v_9 = (unsigned long)(! v_11);
  v = (unsigned long long)(~ (~ (~ v_5) - (long long)((unsigned long)(
                                                      387292103L / (long)(
                                                      v_7 + 252)) - ! v_9)));
  result = (unsigned char)(p + - (- (4294952677ULL + v)));
  return result;
}


