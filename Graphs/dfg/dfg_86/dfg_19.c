#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913530397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, long long p_4, unsigned char p_7,
                long long p_11[3][5], unsigned char p_13)
{
  unsigned long long v_9;
  double v;
  signed char result;
  v = (double)(~ (- (22231UL - ~ p)));
  v_9 = (unsigned long long)(- (p_11[2][2] - (96246632LL - (long long)p_7)) | (long long)(! (! (
                             17192 % ((int)p_13 + 150)))));
  result = (signed char)(! ((unsigned long long)((long long)((double)p_4 + v) * (
                                                 (long long)p_7 % -705098663LL)) % (
                            (v_9 % (v_9 + 15ULL) + (unsigned long long)-3998682972.46) + 672ULL)));
  result = (signed char)(- (~ ((unsigned long)-862178063.954 * p)) / (unsigned long)(
                         (int)(! (! (~ result))) + 20));
  return result;
}


