#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106088400
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, int p_7, unsigned int p_9, short p_11, long long p_15)
{
  long long v_19;
  unsigned short v_17;
  unsigned short v_13;
  unsigned long long v_5;
  long v;
  float result;
  v_19 = 442238445LL;
  v_17 = (unsigned short)p_7;
  v = (long)v_19;
  v_13 = (unsigned short)((long long)(! p_11) & (long long)v_17 * 60137LL);
  v_5 = (unsigned long long)((long long)(- ((unsigned int)(- p_7) + p_9 % (unsigned int)(
                                                                    (int)p_11 + 813))) * (
                             (long long)((unsigned int)(~ p_7) * ((unsigned int)v_13 + 3861078392U)) / (
                             - (! p_15) + 119LL)));
  result = (float)(! ((unsigned long long)(v * (long)(! p)) / (v_5 / 9369476096ULL + 71ULL)));
  return result;
}


