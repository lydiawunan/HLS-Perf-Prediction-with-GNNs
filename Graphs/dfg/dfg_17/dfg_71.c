#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 813400351
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, float p_4, unsigned int p_7, unsigned char p_11,
                  float p_13)
{
  double v_25;
  double v_23;
  unsigned long v_21;
  long v_19;
  long long v_17;
  long long v_15;
  long v_9;
  unsigned char v;
  unsigned char result;
  v_25 = -940.908298031;
  v_21 = (unsigned long)p_7;
  v_19 = 42654L;
  v_17 = -8948LL;
  v_15 = 647956295LL;
  v_9 = 36413L;
  v_23 = (double)28042ULL;
  result = (unsigned char)((long long)((54091 | (int)p_11) / ((int)((unsigned char)p_13) / (
                                                              (int)p_11 + 415) + 403)) * (
                           v_15 / (v_17 + 132LL) + 199LL) ^ (long long)(
                           ~ (v_19 >> (v_21 & 31UL)) ^ (long)(- (v_23 / (
                                                                 v_25 + 904.)))));
  v = (unsigned char)173;
  result = (unsigned char)(- (((p / (double)(p_4 + 396.f)) * (double)(
                               (unsigned long)result ^ 4294919838UL)) * (double)(
                              (unsigned long)((unsigned int)v + p_7) + (unsigned long)(
                              (long)result - v_9))));
  return result;
}


