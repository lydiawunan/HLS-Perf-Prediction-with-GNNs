#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161727783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, char p_9, short p_11[2])
{
  double v_15;
  double v_13;
  int v_6;
  unsigned int v_4;
  float v;
  long result;
  v_15 = -584.535532544;
  v_13 = -1155645086.88;
  v = (float)p_9;
  result = (long)p_9;
  v_4 = (unsigned int)(25454UL - (unsigned long)(0 - (int)(! p_11[0]) * 20272));
  v_6 = -83 & (int)((double)result / (7. / (v_15 * 1.79628346545e+38 + 824.) + 984.));
  result = (long)((unsigned long long)(((v * v) * (float)v_4) / ((float)v_6 / (
                                                                 p + 160.f) + 940.f)) & 
                  (unsigned long long)(6786 - ((int)p_9 & (int)p_11[1])) * (
                  (unsigned long long)(125 & (int)((unsigned char)v_13)) / 18446744073607914134ULL));
  return result;
}


