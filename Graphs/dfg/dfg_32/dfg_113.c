#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103509390
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, long p_9[3], unsigned int p_11)
{
  short v_7;
  double v_5;
  long v;
  long long result;
  v_7 = (short)-31719;
  v_5 = (double)p_11;
  v = 219028776L;
  result = (long long)(! ((unsigned int)v_7 * p_11 + 63887U) ^ 61U);
  v_5 = - (((v_5 + (double)p_9[2]) / 1.84467440731e+19) / -3.08965727546e+38);
  result = (long long)(- ((double)result * v_5)) + p % (long long)(- (
                                                                   (int)v_7 * 19445) + 657);
  result = (- result + ~ ((long long)2.02417059628e+38 | p)) + (4294918838LL ^ (
                                                                ~ result >> (
                                                                ~ v & 63L)));
  return result;
}


