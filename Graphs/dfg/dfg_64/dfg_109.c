#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 457981037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[3][1][1], unsigned long p_5, short p_7, int p_11,
                  unsigned short p_15)
{
  char v_13;
  unsigned long long v_9;
  unsigned long long v;
  unsigned char result;
  v_13 = (char)-51;
  v_9 = (unsigned long long)p[0][0][0];
  v = (unsigned long long)((double)(((int)(- p_7) << 14) - 38443) - p[2][0][0]);
  v_9 %= (unsigned long long)p_11 * ((unsigned long long)p[0][0][0] * v - (unsigned long long)(
                                     (int)v_13 % ((int)p_15 + 103))) + 922ULL;
  v = (unsigned long long)(! p_7) + (v_9 * 1042ULL >> 27ULL);
  result = (unsigned char)(~ (((v % ((unsigned long long)p[1][0][0] + 608ULL)) / (
                               18446744072943485171ULL * (unsigned long long)p_5 + 1014ULL)) / 18446744073709551508ULL));
  return result;
}


