//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 689097156
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long long p_4, char p_9,
           double p_11, double p_15)
{
  int v_13;
  unsigned char v_7;
  short v;
  double result;
  v_7 = (unsigned char)213;
  v = (short)-878;
  v_13 = (int)v_7 / -114;
  result = (double)p_4;
  v = (short)(((p_4 - (unsigned long long)p_9) + (unsigned long long)p_11) % (
              (48ULL + p_4) * (unsigned long long)v_13 + 461ULL) + (unsigned long long)(
                                                                   (int)v * v_13 - (int)p_15) % (
                                                                   (unsigned long long)(
                                                                   (double)v_13 / (
                                                                   p_11 + 629.)) * (
                                                                   (unsigned long long)p_11 * p) + 270ULL));
  result = (double)((((unsigned long long)(- result) >> (- p & 63ULL)) % (
                     (p_4 * (unsigned long long)v + (unsigned long long)(~ v_7)) + 269ULL)) * p_4);
  return result;
}


