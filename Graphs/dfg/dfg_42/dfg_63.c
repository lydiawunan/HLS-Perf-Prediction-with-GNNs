#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 917341142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, int p_19)
{
  float v_17;
  long long v_15;
  unsigned int v_13;
  short v_11;
  unsigned short v_9;
  int v_6;
  unsigned int v_4;
  unsigned long long v;
  unsigned short result;
  v_17 = 1.73441821105e+38f;
  v_15 = (long long)p_19;
  v_13 = 101019176U;
  v_9 = (unsigned short)26921;
  v_6 = -157240981;
  v = (unsigned long long)((float)(0UL / (p + 115UL)) + ((float)(- (- v_15)) + 
                                                         (-64003.f / (
                                                          v_17 + 733.f)) / (
                                                         (float)p_19 + 567.f)));
  v_11 = (short)p;
  v_4 = (unsigned int)(44151LL * (long long)((unsigned long)v_6 * (p / 24615UL) - (unsigned long)(
                                             (unsigned int)((int)v_9 * (int)v_11) - 
                                             v_13 / (unsigned int)((int)v_9 + 611))));
  result = (unsigned short)(v + (unsigned long long)v_4);
  return result;
}


