#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 459125847
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, int p_9[1][1][3], double p_13)
{
  float v_11;
  signed char v_7;
  short v_5;
  unsigned long long v;
  unsigned long long result;
  v_11 = -2.2218598848e+38f;
  v_7 = (signed char)p_13;
  v = (unsigned long long)p;
  v_5 = (short)(- (! (v >> 7)));
  result = (unsigned long long)((long long)(((int)v_5 * (int)v_7) % (
                                            p_9[0][0][0] % 587086735 + 122) - 150) | 
                                ~ (-36415LL * (long long)v_11) % ((long long)(- (
                                                                  p_13 + -29324.)) + 186LL));
  v = result;
  result = (unsigned long long)(- ((double)((float)v * 120.677864075f) + - (- p)));
  return result;
}


