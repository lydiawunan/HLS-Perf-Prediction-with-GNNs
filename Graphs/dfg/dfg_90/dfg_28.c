#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 281146828
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, int p_13[4])
{
  long long v_17;
  float v_15;
  unsigned short v_11;
  long v_9;
  double v_7;
  unsigned long long v_5;
  unsigned short v;
  short result;
  v_15 = (float)p_13[2];
  v_11 = (unsigned short)23351;
  v_9 = (long)p;
  v_7 = -126.672699836;
  v_17 = (long long)((unsigned long)(-78 << ((unsigned long)(p_13[1] % (
                                                             p_13[0] + 697)) % 274873452UL & 7UL)) * 3509078818UL);
  v_5 = (unsigned long long)v_17;
  v = (unsigned short)((unsigned long long)((0 - (unsigned long)(v_9 + (long)v_11)) % (
                                            (unsigned long)(- ((float)p_13[0] * v_15)) + 366UL)) * 37694ULL);
  result = (short)((unsigned long long)p % (((unsigned long long)v * v_5 + (unsigned long long)(- v_7)) + 321ULL));
  return result;
}


