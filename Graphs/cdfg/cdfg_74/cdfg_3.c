#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 622265956
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned int p_5, double p_9, unsigned char p_11,
                char p_17[4][5][2])
{
  int v_15;
  unsigned long v_13;
  double v_7;
  unsigned short v;
  signed char result;
  v_15 = (int)p_9;
  v_15 = (int)(- (! ((unsigned int)v_15 ^ p_5)));
  if (- (- p_9) > (double)(~ (54 - v_15) * (int)(~ (- p_17[3][0][0])))) {
    v_7 = (double)(~ (- (~ p_11)));
    v = (unsigned short)((double)(((unsigned int)-2.08118033073e+38 / (
                                   p_5 + 186U)) / ((unsigned int)(3660508372. + v_7) + 902U)) / (
                         - (104. + p_9) + 916.));
    result = (signed char)(- ((long)p - (-23958L - (long)v)));
  }
  else {
    v_7 = (double)(~ 0);
    v_13 = (unsigned long)v_7;
    result = (signed char)v_13;
  }
  return result;
}


