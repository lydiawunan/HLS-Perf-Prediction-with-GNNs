#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202061179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long long p_9)
{
  int v_19;
  char v_17;
  float v_15;
  unsigned long long v_13;
  signed char v_11;
  short v_7;
  unsigned int v_4;
  unsigned char v;
  long long result;
  v_19 = (int)p;
  v_17 = (char)-6;
  v_15 = 2.01035998806e+38f;
  v_11 = (signed char)-20;
  v_7 = (short)24509;
  v = (unsigned char)p;
  v_13 = (unsigned long long)(- ((int)p % ((int)v * (int)v_7 + 116) + (
                                 (int)(v_15 - (float)v_17) & (130 + v_19))));
  v_4 = (unsigned int)((int)(! v_7) % ((int)v + 557));
  v = (unsigned char)(((unsigned long long)((v_4 + (unsigned int)p) + 
                                            v_4 * 7U) & ((unsigned long long)v_7 * p_9 ^ (unsigned long long)(
                                                         v_4 * (unsigned int)v_11))) - 
                      p_9 / (v_13 + 466ULL));
  result = (long long)v;
  return result;
}


