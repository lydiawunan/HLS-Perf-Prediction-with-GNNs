#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 588150577
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p[1][2], unsigned long p_7, float p_11, float p_15)
{
  unsigned long v_19;
  long long v_17;
  float v_13;
  double v_9;
  short v_5;
  signed char v;
  char result;
  v_19 = (unsigned long)p_15;
  v_17 = 55955LL;
  v = (signed char)15;
  v_13 = (float)((-27078LL - v_17) - (long long)(~ (! v_19)));
  v_9 = (double)((float)((int)((unsigned char)(- (v_13 - 4294967040.f))) * 30) * p_15);
  v_5 = (short)(v_9 - (double)p_11);
  result = (char)(- ((double)(p[0][1] % 2650U) - ((double)((int)v - (int)v_5) + (
                                                  (double)p_7 + v_9))));
  return result;
}


