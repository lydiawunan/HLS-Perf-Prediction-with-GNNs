#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 815804422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned char p_9[1])
{
  long long v_13;
  int v_11;
  long long v_7;
  unsigned long v_4;
  long long v;
  unsigned long long result;
  v_13 = 144834608LL;
  v_11 = (int)p;
  v = - ((long long)v_11 * (v_13 + 8476340224LL));
  v_4 = 3348528234UL;
  v_7 = (long long)(- (! p_9[0]));
  result = (unsigned long long)(v / (long long)((249UL | v_4 / 61UL) + 66UL)) - (
           (unsigned long long)(- ((int)((unsigned char)2.06732212131e+38f) / (
                                   (int)p + 389))) + (unsigned long long)v_7 % 574ULL);
  return result;
}


