#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742094062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, int p_9, long p_11[5], unsigned long long p_17[5][2],
          unsigned long long p_19)
{
  char v_15;
  long v_13;
  unsigned long long v_7;
  char v_4;
  unsigned int v;
  float result;
  v_15 = (char)p_9;
  v_7 = (unsigned long long)p;
  v = 588196144U;
  v_13 = (long)(! p_19);
  v_4 = (char)((unsigned long long)(! p_9 + (int)((float)v_15 + - p)) + (
               ((194ULL - p_17[0][0]) | 34049ULL) + 18446744073709551615ULL));
  result = (- ((float)v_4 * 6.70434795919e+37f) / ((p - (p + 2.15780032796e+38f)) + 252.f)) * (float)(
           (long)((float)(v_7 % ((unsigned long long)p + 1024ULL)) * (
                  p - (float)p_9)) + ((p_11[2] + (long)p) + ~ v_13));
  result = (float)((unsigned long long)(- ((double)result - 1.50466345479e+36)) * (
                   37828ULL + (unsigned long long)v));
  return result;
}


