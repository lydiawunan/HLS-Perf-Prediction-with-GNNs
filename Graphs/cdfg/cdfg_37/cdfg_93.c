#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232855325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long p_7, char p_9, double p_19[1],
                       unsigned long long p_21)
{
  float v_17;
  double v_15;
  unsigned char v_13;
  int v_11;
  char v_5;
  long long v;
  unsigned long long result;
  v_17 = (float)p_7;
  v_15 = (double)p_9;
  v_13 = (unsigned char)p_21;
  v_11 = -360886796;
  while (- (- (97. + v_15)) >= 0.) {
    v_11 = (double)v_17 - 9550744342.47;
    v_17 = (float)(- ((double)((int)((char)-245.697402954f) + (int)p) + p_19[0]));
    v_13 = (unsigned char)((-34.2189310592 + (p_19[0] + (double)p_21)) + 
                           - p_19[0] * - p_19[0]);
    v_15 = (double)(~ (- (p_7 / -39804L)));
  }
  while_0_break: ;
  if (131LL != (long long)v_11 + ((long long)v_13 * 326281243LL) % -28LL) 
    result = (unsigned long long)(- (62689114UL - (unsigned long)(22906 / (
                                                                  (int)p + 775))));
  else {
    v_5 = (char)(-246.937937851 / ((double)(- (p_7 % (long)((int)p_9 + 366))) + 179.));
    v = (long long)(~ (11430L * (long)v_5));
    result = (unsigned long long)v;
  }
  return result;
}


