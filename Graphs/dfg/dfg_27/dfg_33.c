#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510487483
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, char p_11, float p_15, int p_19)
{
  int v_21;
  unsigned int v_17;
  double v_13;
  float v_9;
  unsigned long long v_6;
  unsigned long v_4;
  int v;
  unsigned char result;
  v_21 = 740909482;
  v_17 = (unsigned int)p_15;
  v_9 = 4251622400.f;
  v_6 = (unsigned long long)p;
  v_13 = (double)(1277.f + -1.48194178437e+35f * (float)(v_6 * (unsigned long long)p_19 << (
                                                         - v_21 & 63)));
  v_4 = (unsigned long)(~ ((unsigned int)(p_19 % ((int)v_9 + 79)) % 4244951710U) / 199U);
  v = (int)(((double)((int)p / ((int)((signed char)v_9) + 22) + (int)p_11) * (
             v_13 * (double)v_9)) * (double)((unsigned int)p_15 - (692570990U - ~ v_17)));
  result = (unsigned char)((unsigned long long)(! (! (-319853100LL - (long long)v))) / (
                           ((unsigned long long)(~ (! v_4)) + v_6) + 33ULL));
  return result;
}


