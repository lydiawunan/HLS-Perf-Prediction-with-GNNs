#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 263148046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned char p_7, char p_9,
          signed char p_13, double p_19)
{
  double v_21;
  unsigned long long v_17;
  long v_15;
  unsigned long long v_11;
  long long v_5;
  long v;
  short result;
  v_21 = (double)p;
  v_15 = 33211L;
  v_11 = (unsigned long long)p_13;
  v_5 = -887162117LL;
  v = (long)p;
  result = (short)-26637;
  v_17 = (unsigned long long)((int)result - (int)((short)((p_19 * (double)(
                                                           v * (long)p_9)) * v_21)));
  v = (long)((int)(~ (- p_13)) / ((int)((signed char)(((double)(472502454ULL + v_17) / (
                                                       p_19 + 398.)) * p_19)) + 739));
  v = (long)((((p - 4294952457ULL) + 3305200895ULL) + (unsigned long long)(
              - v << (! v_5 & 31LL))) + (unsigned long long)(v_5 % -6408LL & (long long)(
                                                             (int)p_7 + (int)p_9)) / (
                                        (v_11 / (unsigned long long)(
                                         (int)p_13 + 619) + (unsigned long long)(
                                         v & v_15)) + 378ULL));
  result = (short)(- v);
  return result;
}


