#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705504345
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, long long p_11[4][1][3], unsigned long long p_15)
{
  short v_13;
  long v_9;
  unsigned char v_6;
  double v_4;
  float v;
  char result;
  v_13 = (short)p_11[3][0][1];
  v = (float)p;
  v_9 = 9971L;
  v_6 = (unsigned char)((unsigned long long)(((long long)(35 - (int)((unsigned char)1.92496151089e+38f)) * (
                                              (long long)v_9 / (p_11[3][0][2] + 190LL))) / (long long)(
                                             (int)(~ v_13) + 592)) + p_15);
  v_4 = (double)0;
  result = (char)((double)((int)((unsigned short)((double)(- v) * - v_4)) / 3807) + (
                  (double)(~ v_6) / (- p + 212.) - - p));
  return result;
}


