#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202832387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long p_9[4][1][2],
                   signed char p_13[5][4][3], unsigned char p_17, short p_19)
{
  unsigned long v_21;
  long v_15;
  unsigned long long v_11;
  long long v_6;
  int v_4;
  float v;
  unsigned short result;
  v_21 = (unsigned long)p_19;
  v_15 = p_9[2][0][1];
  v_4 = (int)p;
  v_11 = (unsigned long long)(((double)(v_15 / (long)((int)p_17 + 222)) * -1.08236643695e+41 + (double)p_19) + (double)(
                              v_21 / (unsigned long)((int)(! p_13[2][1][1]) + 996) + (unsigned long)(
                              p - ~ p)));
  v_6 = (long long)((int)2.11427501219e+37f * ((int)p_13[2][3][0] / (
                                               (int)((signed char)-9961484288.f) + 550)));
  v = (float)((unsigned long long)(((long long)v_4 * v_6) % (long long)(
                                   p + 27U) - (long long)((unsigned long)p_9[2][0][1] - 4293233221UL)) / (
              v_11 + 302ULL));
  result = (unsigned short)v;
  return result;
}


