#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620104888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, signed char p_5[4], float p_11, float p_13,
         signed char p_19)
{
  int v_17;
  unsigned char v_15;
  unsigned long v_9;
  short v_7;
  unsigned long long v;
  long result;
  v_17 = (int)p;
  v_15 = (unsigned char)p;
  result = (long)p;
  v_9 = (unsigned long)((long)(- ((p_11 + p_13) + (float)(! v_15))) % (
                        ((long)(v_17 / ((int)(- p_13) + 701)) + - (result / (long)(
                                                                   (int)p_19 + 474))) + 580L));
  v_7 = (short)v_9;
  v = (unsigned long long)(4294902110U * (unsigned int)v_7);
  result = (long)(18446744073709551614ULL / ((0ULL - ((unsigned long long)p - v) % (unsigned long long)(
                                                     (int)p_5[0] + 875)) + 600ULL));
  return result;
}


