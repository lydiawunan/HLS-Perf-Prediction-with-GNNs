#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114702024
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, int p_5, unsigned long p_11, float p_17[2])
{
  int v_15;
  unsigned int v_13;
  unsigned short v_9;
  long v_7;
  signed char v;
  unsigned int result;
  v_15 = -57534;
  v_13 = 3557176512U;
  v_7 = 341647L;
  v_9 = (unsigned short)p;
  v_7 = (long)((float)(- ((unsigned long)(~ v_9) % (p_11 * (unsigned long)v_13 + 108UL))) / (
               (float)v_15 / ((- p_17[0] + (float)(! v_7)) + 983.f) + 239.f));
  v = (signed char)((unsigned long long)(- (- p)) % ((unsigned long long)(- p) * 20333ULL + 471ULL) - (unsigned long long)v_7);
  result = (unsigned int)(- p - (double)(! (((int)v + 77) * p_5)));
  return result;
}


