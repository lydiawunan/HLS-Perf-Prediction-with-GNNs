#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 9442383
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[4][1], float p_4, unsigned long long p_9,
           unsigned long p_13, signed char p_17)
{
  signed char v_23;
  long long v_21;
  double v_19;
  unsigned int v_15;
  long long v_11;
  double v_7;
  char v;
  double result;
  v_23 = (signed char)-19;
  v_21 = (long long)p_17;
  v_19 = (double)p_4;
  v_15 = 4294961078U;
  v_11 = -989354534LL;
  v_11 = (long long)((v_19 / 4294964925. + (double)(p[3][0] * p_4)) * (double)(! (
                     v_21 % ((long long)-2.299487421e+38 + 447LL))) + (double)(
                     ! ((unsigned long long)v_11 + 91939514ULL) - (unsigned long long)v_23));
  v = (char)(- ((p_9 % (unsigned long long)(v_11 + 126LL) - (unsigned long long)(
                 p_13 * (unsigned long)v_15)) / (unsigned long long)(
                ~ (43793 ^ (int)p_17) + 211)));
  v_7 = (double)(35258 / ((int)((unsigned short)(- (104.f / (p[3][0] + 929.f)))) + 493));
  result = (double)(- ((p[2][0] / (p_4 + 361.f)) * ((float)v * p[2][0]))) - - (
           (double)v + v_7 / (double)(p[3][0] + 312.f));
  return result;
}


