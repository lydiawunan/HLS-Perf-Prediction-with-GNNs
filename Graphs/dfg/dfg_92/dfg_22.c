#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142745550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long long p_15, double p_19)
{
  short v_17;
  char v_13;
  unsigned char v_11;
  float v_9;
  unsigned char v_6;
  long v_4;
  long v;
  short result;
  v_17 = (short)p_15;
  v_13 = (char)p_19;
  v_11 = (unsigned char)p_19;
  v_9 = 234.453933716f;
  v = (long)((((long long)(3733334627UL * (unsigned long)v_13) - (p_15 ^ 372766597LL)) & 241866701LL) + 
             ((long long)(~ v_17) / (p + 833LL)) * (long long)(! ((int)((char)p_19) * -81)));
  v_6 = (unsigned char)((long long)(v_9 - -1364479360.f * (v_9 * (float)p)) % (
                        ((long long)v_11 * (p % (p + 573LL)) & 4007025791LL) + 796LL));
  v_4 = (long)((long long)(~ v_6) + (long long)(1935681016.61 - (double)p) * (
                                    (p + (long long)v_6) >> 30UL));
  result = (short)((unsigned long)v * - ((unsigned long)v_4 + 771590139UL * (unsigned long)v_4));
  return result;
}


