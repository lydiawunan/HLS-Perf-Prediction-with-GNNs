#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495969108
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, unsigned long p_7, unsigned char p_9)
{
  int v_11;
  unsigned long v_5;
  long long v;
  long result;
  v_11 = 595878673;
  result = (long)p;
  v = (long long)(24UL / ((4294915834UL % (unsigned long)(v_11 + 348) + 527607558UL) + 281UL) - (unsigned long)result);
  result = (long)p_9;
  v_5 = (unsigned long)result;
  result = (long)(~ (((v - (long long)p) % (long long)(v_5 / (p_7 + 315UL) + 165UL)) % (long long)(
                     ~ (20 / ((int)((signed char)5838591148.01) + 947)) + 880)));
  return result;
}


