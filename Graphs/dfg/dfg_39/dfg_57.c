#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409911718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, long long p_13)
{
  short v_11;
  int v_9;
  unsigned char v_7;
  unsigned long v_4;
  double v;
  unsigned long long result;
  v_9 = -50610;
  v_7 = (unsigned char)p_13;
  v_4 = (unsigned long)p;
  result = 3624557873ULL;
  v_11 = (short)-44;
  v = (double)(((42ULL & (unsigned long long)((int)((unsigned char)p) + (int)v_7)) + (unsigned long long)(
                -3834 | ! v_9)) * ((unsigned long long)(- (- v_11)) + (
                                   ((unsigned long long)v_11 - 18446744073274283065ULL) ^ (unsigned long long)(! p_13))));
  result = (unsigned long long)((unsigned long)(v - 9243.) / (! v_4 + 167UL)) * ! (! (- result));
  return result;
}


