#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965206758
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, char p_13, short p_17)
{
  unsigned char v_15;
  long v_11;
  unsigned char v_9;
  double v_7;
  char v_5;
  long v;
  float result;
  v_15 = (unsigned char)169;
  v_11 = (long)p_17;
  v_9 = (unsigned char)p_13;
  v_7 = 7.65342320326e+37;
  v_5 = (char)-96;
  v = (long)p_17;
  result = (float)(! (((int)p_17 - (int)v_9) * 33851700));
  while (- v * v >= (long)((int)(- (p * p)) + (8834 / ((int)((short)p) + 118)) / (
                                              (int)v_5 * (int)((char)p) + 752))) {
    v_5 = (double)v_11 / (((double)v_9 - v_7 * -927.270356927) + 91.);
    v_9 = (unsigned char)(((int)v_15 + (int)p_13) * ((int)p_13 ^ (int)v_5) - (
                          (int)p_17 - 16696));
    v_5 = (char)((int)p_13 / (((int)((char)p) | 7) + 369) << 30);
    v = (long)((double)((float)(- v_9) - (result - result)) / ((p - 75.) / (
                                                               (p - p) + 710.) + 352.));
  }
  while_0_break: ;
  return result;
}


