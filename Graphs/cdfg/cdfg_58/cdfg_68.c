#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 848094303
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, long p_7, unsigned short p_9)
{
  float v_19;
  double v_17;
  unsigned char v_15;
  int v_13;
  unsigned long long v_11;
  char v_4;
  long v;
  double result;
  v_19 = (float)p_9;
  v_17 = -2262278571.41;
  v_15 = (unsigned char)p_9;
  v = -48520L;
  v_13 = ~ (- ((int)((short)v_19) * 13424));
  if ((double)(p_7 * (long)v_15) / ((double)(v_13 + v_13) * - v_17 + 730.) == (double)(! (
      (p_7 - 48L) | (long)(! v_13)))) {
    result = (double)(! (-794237731LL + (long long)(- p_7)));
    v_4 = (char)result;
    result = (double)(v + (long)(4315 / ((int)v_4 + 918) + p));
  }
  else {
    v_11 = (unsigned long long)v_13;
    v = (long)((unsigned long long)((long long)((int)p_9 + 50052)) * 97414232ULL);
    result = (double)(~ ((unsigned long long)(- v) % (((unsigned long long)p_9 + v_11) + 52ULL)));
  }
  return result;
}


