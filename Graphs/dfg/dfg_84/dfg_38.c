#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823982337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, short p_7, char p_9[2][5], unsigned int p_17)
{
  long v_19;
  unsigned long long v_15;
  float v_13;
  char v_11;
  unsigned long v_4;
  unsigned char v;
  long result;
  v_19 = (long)p_9[1][3];
  v_15 = (unsigned long long)p_17;
  v_13 = (float)p;
  v_11 = (char)(((unsigned long)p_7 & 252695927UL) ^ (unsigned long)(
                (float)((unsigned long)(p_17 - (unsigned int)p_7) % (unsigned long)(
                        - v_19 + 206L)) - -261219184.f / (((float)p_7 + v_13) + 799.f)));
  v = (unsigned char)(- (((float)((int)p_9[1][4] / ((int)v_11 + 517)) / (
                          (v_13 + (float)v_15) + 80.f)) * 21041.f));
  v_4 = (unsigned long)((double)p / (((double)(51867 >> ((int)p_7 & 15)) / (
                                      ((double)p_7 + 5.94906905748e+37) + 119.) - (double)p) + 178.));
  result = (long)((unsigned long)(! (! (~ v))) / (v_4 + 557UL));
  return result;
}


