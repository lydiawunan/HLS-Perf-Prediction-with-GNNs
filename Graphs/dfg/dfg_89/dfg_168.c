#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 443341425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p[5][1][5])
{
  unsigned long long v_19;
  unsigned char v_17;
  double v_15;
  unsigned long v_13;
  double v_11;
  double v_9;
  unsigned char v_6;
  long long v_4;
  long v;
  long result;
  v_19 = 44262ULL;
  v_17 = (unsigned char)p[4][0][2];
  v_15 = -2.84163555145e+38;
  v_11 = -1.96888082853e+38;
  v_9 = -7080507865.24;
  v_6 = (unsigned char)p[0][0][1];
  v = (long)p[2][0][0];
  result = -53415L;
  v_13 = (unsigned long)(((unsigned long long)((int)((char)v_15) | (int)p[0][0][2]) / (
                          (unsigned long long)v_17 % (v_19 + 262ULL) + 8ULL) + (unsigned long long)(! (
                          (int)p[1][0][1] * (int)p[1][0][2]))) + (unsigned long long)(- (! (
                         result / 12L))));
  v_9 = ((double)p[3][0][2] * (- v_9 - 0.)) / 272.;
  v_4 = (long long)(0UL / (((unsigned long)v_11 + ~ v_13) + 35UL));
  result = (long)((double)((long long)v / (v_4 + 492LL)) - - ((double)v_6 * (
                                                              (double)p[3][0][3] / (
                                                              v_9 + 896.))));
  return result;
}


