#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 651517923
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned long long p_5, float p_7,
                unsigned long p_13[1][3], long p_15)
{
  unsigned char v_11;
  signed char v_9;
  char v;
  signed char result;
  v_9 = (signed char)-83;
  result = (signed char)p_13[0][0];
  v_11 = (unsigned char)((int)((signed char)(- (- p_7) / ((float)(~ p_5 ^ (unsigned long long)p_7) + 73.f))) & (int)(! v_9));
  v_9 = (signed char)((unsigned long long)(((unsigned long)v_11 & p_13[0][0]) * (unsigned long)(~ p_15)) % (
                      ((unsigned long long)(! p_13[0][1]) + ((unsigned long long)p_13[0][2] - p_5)) + 131ULL) & (
                      (unsigned long long)(- (! p)) + (437ULL - ~ p_5)));
  v = (char)3;
  result = (signed char)((unsigned long long)(- ((long)((int)v | 73) * p)) - 
                         ((unsigned long long)(151 % ((int)result + 588)) / (
                          (p_5 & (unsigned long long)p_7) + 432ULL)) % (
                         18446744072890367370ULL * (unsigned long long)(
                         (int)v_9 + (int)v) + 620ULL));
  return result;
}


