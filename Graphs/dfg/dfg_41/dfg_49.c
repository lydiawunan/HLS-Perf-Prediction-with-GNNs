#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 583073775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned int p_4[4], unsigned long p_7,
        unsigned short p_9[5], unsigned long long p_13[4][4][5])
{
  double v_17;
  long v_15;
  unsigned long long v_11;
  short v;
  int result;
  v_17 = -7442832549.89;
  v_15 = -125556487L;
  v_11 = (unsigned long long)(- (((float)(! v_15) - (float)p_9[0] / (
                                                    p + 687.f)) * (float)(
                                 p_4[0] / (unsigned int)(29238 * (int)((unsigned short)p) + 98))));
  v_15 = (long)(- -7250);
  v = (short)((double)(v_15 % (long)(719 * (int)p_9[0] + 498)) / (v_17 + 701.) + 114.);
  result = (int)(((unsigned long long)((long long)((unsigned int)p / (
                                                   p_4[0] + 571U)) - 
                                       (long long)v / -42861LL) + ((unsigned long long)(
                                                                   935293279UL - p_7) - 
                                                                   (unsigned long long)p_9[1] % (
                                                                   v_11 + 615ULL))) / (
                 ((unsigned long long)(~ v) & (p_13[1][0][3] - (unsigned long long)p_4[0])) / (unsigned long long)(
                 (int)p_9[3] + 115) + 858ULL));
  return result;
}


