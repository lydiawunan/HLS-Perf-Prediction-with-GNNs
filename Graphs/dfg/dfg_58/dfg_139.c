#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001381693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long long p_11, int p_13, double p_21[3][1][4])
{
  float v_23;
  double v_19;
  char v_17;
  unsigned long v_15;
  char v_9;
  unsigned long long v_6;
  double v_4;
  int v;
  char result;
  v_23 = (float)p_21[0][0][2];
  v_19 = (double)p;
  v_17 = (char)-23;
  v_15 = 3522312439UL;
  v_9 = (char)-5;
  v_4 = -687.829636826;
  v = -60820;
  result = (char)p;
  v_4 = (double)(~ ((int)(v_4 - -434394176. / (v_19 + 63.)) & (int)(p_21[1][0][2] / (double)(
                                                                    v_23 + 837.f)) % (
                                                              v + 952)));
  v_6 = (unsigned long long)(((- p - ((unsigned long)v_9 + p)) >> ((p_11 % (
                                                                    p_11 + 73LL)) / (long long)(
                                                                   ((unsigned long)p_13 ^ v_15) + 29UL) & 31LL)) - (unsigned long)(~ (~ (- v_17))));
  v = (int)((18446744054739697712ULL ^ (unsigned long long)((unsigned long)(
                                                            (int)result % (
                                                            (int)((char)v_4) + 359)) / 3370755929UL)) % (
            v_6 + 705ULL));
  result = (char)v;
  return result;
}


