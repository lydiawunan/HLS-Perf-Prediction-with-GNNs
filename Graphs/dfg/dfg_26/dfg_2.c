#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421275987
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, signed char p_9)
{
  unsigned short v_13;
  short v_11;
  unsigned short v_7;
  unsigned long long v_4;
  unsigned long long v;
  float result;
  v_11 = (short)-9044;
  v = (unsigned long long)p_9;
  result = (float)p;
  v_13 = (unsigned short)(~ (short)-30664);
  v_7 = (unsigned short)((long)(- (p + (int)p_9) / ((int)(- result + (float)(! v_11)) + 961)) % (
                         (! (-56808L << ((int)v_13 & 31)) - (long)(- p_9)) + 973L));
  v_4 = (unsigned long long)p;
  result = (float)((((unsigned long long)(- result) - ! v) * (v_4 - (
                                                              (unsigned long long)p + v))) / (unsigned long long)(
                   (int)(! (~ (~ v_7))) + 170));
  return result;
}


