#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 216694958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned char p_4, double p_7, short p_9,
                 float p_11)
{
  unsigned char v_19;
  float v_17;
  int v_15;
  float v_13;
  long v;
  unsigned int result;
  v_19 = (unsigned char)252;
  v_13 = (float)p_9;
  v = (long)p_4;
  result = (unsigned int)p_4;
  v_15 = (int)v_19;
  while ((float)(((unsigned long long)(p + (unsigned long)p_4) + 71ULL) + (unsigned long long)(
                 ((unsigned long)v + 4170085342UL) * (unsigned long)(
                 (int)((short)p_7) * (int)p_9))) >= (float)((unsigned long)(- p_11) + 751043160UL) - (
                                                    93.f / (v_13 + 5.f) + (float)(
                                                    (unsigned long)p_4 + p))) {
    v_17 = (long)v_15 | -876425007L;
    v_13 = - (v_17 - 59983.f) + 65535.f;
    result = (unsigned int)(p % ((unsigned long)(p_11 * (float)p - (float)(
                                                 (int)p_4 / ((int)((unsigned char)p_11) + 644))) + 724UL));
    v = (long)-7.63967056512e+17;
  }
  while_0_break: ;
  return result;
}


