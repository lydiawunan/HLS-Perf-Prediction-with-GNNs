#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 664617438
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned short p_4, long p_6, double p_13)
{
  float v_11;
  unsigned char v_9;
  short v;
  double result;
  v_9 = (unsigned char)149;
  v_11 = (float)(- (- p_13));
  v = (short)2.32750973233e+28;
  result = (double)(((long long)(! (206L % (p_6 + 990L))) & - (773770340LL ^ p)) * (long long)(- (
                    (float)v_9 + v_11 * 9203006464.f)));
  result = (double)(((900LL / (p % 31953LL + 5LL)) / (long long)(((long)p_4 + 
                                                                  (long)result * p_6) + 545L)) % (long long)(
                    (int)v + 752));
  return result;
}


