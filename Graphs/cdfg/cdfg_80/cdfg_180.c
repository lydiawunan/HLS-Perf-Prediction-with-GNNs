#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 506948313
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[4][4][5], double p_5)
{
  long long v_17;
  float v_15;
  float v_13;
  double v_11;
  unsigned long long v_9;
  char v_7;
  long long v;
  unsigned int result;
  v_15 = 5598237184.f;
  v_13 = (float)p[2][2][1];
  v_11 = 990.173604006;
  v_9 = 39161ULL;
  v_7 = (char)p[1][1][0];
  v = (long long)p[2][2][4];
  result = 3684631213U;
  if ((long long)(- v_13 + (float)(38142 + (int)((unsigned short)v_15))) % (
      (-461339631LL + (long long)(- p_5)) + 503LL) != (long long)((p[2][3][3] * -794537672.) / (double)(
                                                                  v_15 + 488.f) - 
                                                                  - p_5 * p_5)) {
    result = (unsigned int)(p[3][1][0] - ((double)(v_15 - -19.f) + p[1][0][1]));
    v_17 = (long long)((int)((unsigned short)(- p_5)));
    v_7 = (char)p_5;
  }
  else {
    v_13 = (float)(- (- ((double)v_9 + p[3][3][0])));
    v_7 = (char)((int)v_7 + -911065035);
    v_17 = (long long)((unsigned long long)(((unsigned int)p_5 - 3232773469U) % (
                                            (unsigned int)(p_5 - 37.) + 273U)) % 18446744073520086851ULL);
  }
  while (- (- (p[2][2][4] * (double)v)) > (double)(- (- ((long long)p_5 / (
                                                         v + 353LL))))) {
    v_7 = v_9 % (unsigned long long)(((int)v_7 + (int)((char)8102803456.f)) + 172);
    result = (unsigned int)(~ ((long long)(v_13 / 32480274.f) - (long long)v_15 / (
                                                                v_17 + 324LL)));
    v_9 = (unsigned long long)(! result);
    v = (long long)(- v_11);
  }
  while_0_break: ;
  return result;
}


