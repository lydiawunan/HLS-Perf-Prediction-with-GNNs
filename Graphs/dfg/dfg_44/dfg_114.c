#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681525653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[3], int p_7)
{
  signed char v_11;
  float v_9;
  long long v_4;
  char v;
  long long result;
  v_11 = (signed char)p_7;
  v_9 = (float)v_11;
  v_4 = (long long)v_9;
  v = (char)(- (- ((float)p_7 * -1.64665024138e+38f - (float)p[1])));
  result = (long long)((unsigned long long)(~ (67441958U ^ (unsigned int)v)) % (
                       ((18446744072793659705ULL % (unsigned long long)(
                         v_4 + 56LL)) % 19097ULL) % ((unsigned long long)(
                                                     6.19568135225e+37f + (float)p[2]) + 448ULL) + 90ULL));
  return result;
}


