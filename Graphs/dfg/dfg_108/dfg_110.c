#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 646081259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned char p_13[3], unsigned int p_15)
{
  unsigned int v_11;
  long v_9;
  long long v_7;
  int v_5;
  double v;
  long result;
  v_9 = (long)p_15;
  v_7 = (long long)p_15;
  v_5 = 433043283;
  v = (double)p_15;
  result = 18551L;
  v_11 = (unsigned int)((long long)v_9 * ((long long)((int)v + (int)p_13[1] / 95) % (
                                          ((long long)p_15 - p) % 4294935188LL + 227LL)));
  v = (double)(((p * (long long)result + (long long)(-899692732L % (long)(
                                                     v_5 + 771))) + ~ (
                v_7 >> 7)) / ((long long)(56740UL * ((unsigned long)v_9 * (unsigned long)v_11)) + 200LL));
  result = (long)(v * (double)(- p));
  result = result;
  return result;
}


