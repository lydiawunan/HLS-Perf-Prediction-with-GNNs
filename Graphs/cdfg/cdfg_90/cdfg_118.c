#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566007190
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, signed char p_5, long long p_13, unsigned int p_19)
{
  long long v_21;
  short v_17;
  short v_15;
  float v_11;
  signed char v_9;
  long v_7;
  int v;
  double result;
  v_21 = p_13;
  v_17 = (short)7239;
  v_15 = (short)12200;
  v_11 = (float)p;
  v_9 = (signed char)-59;
  v = (int)p_19;
  v_7 = (long)((long long)((unsigned int)(- v_15) % (p_19 / 22424U + 741U)) + (
               p % (p_13 + 6LL) - (long long)(! v_17)));
  if (850763200.f >= v_11 / ((float)(~ ((long long)p_5 + p_13)) + 318.f)) {
    v_7 = (long)((long long)(~ (3520207342U - (unsigned int)v_9)) | (
                 (long long)((int)((signed char)v_11) / ((int)p_5 + 1023)) + ~ p_13));
    v = (int)(-5.38799237351e+37 + (double)((long)(- v) * ((long)p_5 * v_7)));
    result = (double)(! (- p * (long long)v));
  }
  else {
    v_17 = (short)((long long)(462L - v_7) * (p * v_21) - (p_13 - p_13));
    v_15 = (short)(- ((long long)p_19 + ~ p));
    result = (double)((long long)(95 - (102 & (int)v_15)) + 27041LL * (long long)(! v_17));
  }
  return result;
}


