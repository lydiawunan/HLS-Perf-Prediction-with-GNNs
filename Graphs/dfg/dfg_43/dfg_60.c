#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 797414998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, char p_4, unsigned int p_13, long long p_15, float p_17)
{
  unsigned char v_19;
  long long v_11;
  double v_9;
  float v_7;
  float v;
  long result;
  v_19 = (unsigned char)115;
  v_11 = 3809LL;
  v_9 = -710.796284342;
  v_7 = 5236362240.f;
  v = (float)p_15;
  v_7 = (float)((long long)((int)(v_7 / ((float)p_13 + 243.f) + (float)p_15) + - (
                            (int)((unsigned char)v_7) & (int)v_19)) | 426922165LL);
  v_9 = (double)((((long long)(4294933510UL - (unsigned long)v_9) / (
                   - v_11 + 470LL)) / (long long)((unsigned long)(~ p_13) * (
                                                  7659UL | (unsigned long)p_17) + 626UL)) / (long long)(
                 ((int)((unsigned char)(- (- v))) + (int)(! (- v_19))) + 101));
  v = (float)((v_11 & -2520LL * (long long)((int)p_4 / ((int)p_4 + 25))) * ! (
              (long long)(4294967221U + p_13) / (! p_15 + 699LL)));
  result = (long)(((int)(p / ((double)p_4 + 498.) + (double)(- v)) % (
                   (int)((short)((double)v_7 - v_9)) % 449 + 809)) * 14);
  return result;
}


