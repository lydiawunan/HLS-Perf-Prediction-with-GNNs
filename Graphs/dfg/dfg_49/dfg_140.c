#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 589924603
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned char p_5, unsigned char p_13)
{
  unsigned short v_11;
  long long v_9;
  unsigned short v_7;
  unsigned long long v;
  double result;
  v_11 = (unsigned short)p;
  v = (unsigned long long)p;
  v_9 = (long long)((double)(- ((48621396ULL - v) & (unsigned long long)p_13)) + -4031154721.43);
  v_7 = (unsigned short)((int)2.34461876328e+38f / (- (((int)v_11 % (
                                                        (int)p_13 + 130)) / -2002048692) + 157));
  v = (unsigned long long)v_9;
  result = (double)(- (! (v ^ (unsigned long long)p) / (unsigned long long)(
                       ((int)(- p_5) + (int)(! v_7)) + 674)));
  return result;
}


