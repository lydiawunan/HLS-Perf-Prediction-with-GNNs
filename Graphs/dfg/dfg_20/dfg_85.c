#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817594873
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[1], long p_7, unsigned long p_15)
{
  short v_13;
  unsigned long long v_11;
  int v_9;
  double v_5;
  signed char v;
  unsigned long long result;
  v_13 = (short)p_15;
  v_11 = (unsigned long long)p_7;
  v_9 = -11716;
  result = 18446744073709513220ULL;
  v_5 = (double)(- (~ (result / (unsigned long long)((int)v_13 + 104))) - (unsigned long long)(- p_15));
  v = (signed char)(((v_11 - 18446744073709551557ULL) % (unsigned long long)(
                     - p_7 + 587L) + (unsigned long long)(v_5 * 3610. + -9586812.19039)) ^ (unsigned long long)(! p_7));
  v_5 = (double)v_9;
  result = (unsigned long long)((unsigned long)((long)((int)(! v) & (int)p[0] / (
                                                                    (int)((unsigned short)v_5) + 1018)) + 
                                                28239L % (75L * p_7 + 451L)) % (unsigned long)(
                                (175552471U + (unsigned int)v_9) + 588U));
  return result;
}


