#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 866775029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[5][1][1], unsigned long p_13)
{
  signed char v_17;
  int v_15;
  int v_11;
  char v_9;
  unsigned short v_7;
  unsigned int v_5;
  unsigned short v;
  short result;
  v_17 = (signed char)p[3][0][0];
  v_15 = -479649266;
  v_11 = 638948621;
  v_7 = (unsigned short)p_13;
  v_5 = (unsigned int)p_13;
  v = (unsigned short)33659;
  result = (short)p[0][0][0];
  v_9 = (char)((long long)(- ((double)p_13 - -5743574537.24) + (double)(
                           (long long)p_13 - 745140590LL % (long long)(
                                             (int)v_17 + 282))) / ((long long)(- v) / (
                                                                   ((long long)(
                                                                    p_13 / (
                                                                    p_13 + 843UL)) - 
                                                                    (long long)p_13 % 1057108398LL) + 264LL) + 414LL));
  v_5 = (unsigned int)((unsigned long)((unsigned int)(- ((int)result / (
                                                         (int)v_7 + 112))) + 
                                       ((unsigned int)v_9 * v_5) * (unsigned int)(~ v_11)) / (
                       ((50UL | p_13) >> (((unsigned long)v_15 + 11492UL) & 31UL)) % (unsigned long)(
                       (int)v_17 + 747) + 614UL));
  v = (unsigned short)(- ((unsigned long)p[4][0][0] * (3642668205UL - (unsigned long)(
                                                       30224U % (v_5 + 526U)))));
  result = (short)v;
  return result;
}


