#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 705805284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned long long p_4)
{
  short v_13;
  char v_11;
  long v_9;
  float v_7;
  long v;
  unsigned short result;
  v_13 = (short)-14656;
  v_11 = (char)p_4;
  v_9 = (long)p;
  v_7 = (float)((! v_9 * (long)v_11) / (long)((int)v_13 + 837));
  result = (unsigned short)(v_7 + 226.f);
  v = (long)((((unsigned long long)result + 18446744073709544164ULL) % 47948ULL << 1) + 48388ULL);
  result = (unsigned short)(- ((unsigned long long)((int)result / ((int)((unsigned short)p) + 867)) / (
                               p_4 + 136ULL)) % (unsigned long long)(
                            v + 1021L));
  return result;
}


