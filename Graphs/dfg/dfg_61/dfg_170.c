#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487840356
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, unsigned long long p_11[2][3], int p_15)
{
  long long v_13;
  double v_9;
  float v_6;
  double v_4;
  signed char v;
  long long result;
  v_13 = (long long)p_11[1][1];
  v_4 = (double)p;
  v = (signed char)p_11[1][1];
  result = 955LL;
  result = (long long)(! ((int)((float)v * p) % (p_15 + 780)) | (int)(
                       (float)result + 2.33185565139e+38f));
  v_9 = (double)(! (- (~ result / (v_13 + 376LL))));
  v_6 = (float)(- (! ((unsigned long long)(2.30858320896e+38 * v_9) - (
                      p_11[1][1] | 28ULL))));
  result = (long long)(((int)(~ v) + (int)((signed char)(((double)v + v_4) - (double)(
                                                         231.f - v_6)))) / (
                       (((int)((unsigned short)-365.894622803f) * 4614 - (int)p) | (
                        (75 + (int)((char)-898.188171387f)) >> ((int)(- p) & 31))) + 403));
  return result;
}


