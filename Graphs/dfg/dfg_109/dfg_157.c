#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 277006415
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[4], long p_7, unsigned int p_9)
{
  long long v_11;
  unsigned int v_5;
  unsigned char v;
  int result;
  v_11 = 36816LL;
  v_5 = (unsigned int)(- (18446744072950863802ULL + (unsigned long long)(! p_9)) / (unsigned long long)(
                       v_11 + 282LL));
  result = (int)p_7;
  v = (unsigned char)(- ((unsigned long long)(-92 % (result + 893)) % (
                         (485640237ULL & p[3]) + 976ULL) - (unsigned long long)(
                         22243UL - 4294959548UL * (unsigned long)v_5)));
  result = (int)v;
  return result;
}


