#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 831181833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, unsigned int p_5, unsigned int p_9, double p_11, float p_15)
{
  int v_21;
  double v_19;
  short v_17;
  long long v_13;
  float v_7;
  unsigned short v;
  short result;
  v_21 = 280509555;
  v_19 = (double)p;
  v_17 = (short)p_15;
  v_13 = (long long)((long)v_21 % 17426L);
  v_7 = - p_15;
  v = (unsigned short)((int)((double)(v_13 / ((long long)p_15 + 643LL) | (long long)(
                                      (unsigned int)p_11 - p_9)) / ((double)(
                                                                    (unsigned int)v_17 * p_5) * (
                                                                    -2.9215768159e+38 * v_19) + 873.)) / (
                       p + 536));
  result = (short)((-314430268LL + (long long)(~ p)) * (long long)(- (
                   (unsigned int)v ^ p_5)) << (((unsigned long)(~ ((unsigned int)v_7 * p_9)) - (unsigned long)(- (
                                                34664L + (long)p_11))) & 63UL));
  return result;
}


