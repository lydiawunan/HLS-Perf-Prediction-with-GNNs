#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42579793
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, float p_4, long long p_6, float p_9,
         unsigned long long p_11[3][1])
{
  signed char v_21;
  unsigned short v_19;
  double v_17;
  int v_15;
  unsigned long long v_13;
  signed char v;
  long result;
  v_21 = (signed char)-29;
  v_19 = (unsigned short)55431;
  v_17 = 8160329876.87;
  if (-1 >= (int)((char)(v_17 * (double)v_19 + (double)(- ((float)v_21 / (
                                                           p_4 + 339.f)))))) {
    v_15 = (int)((unsigned long long)((641808419LL * p_6) * ((long long)p_4 | p_6)) / 11228ULL);
    v_13 = (unsigned long long)(v_15 % ((int)(p - (double)(1069401255LL / (
                                                           p_6 + 137LL))) + 129));
  }
  else v_13 = ! (~ (~ p_11[2][0]));
  if (p_11[1][0] != - (- (v_13 ^ (unsigned long long)p_9))) result = (long)p;
  else {
    v = (signed char)(-(unsigned char)35);
    result = (long)((- p_4 / -1.98262318445e+38f) * (float)((p_6 - (long long)v) - (long long)(- p_9)));
  }
  return result;
}


