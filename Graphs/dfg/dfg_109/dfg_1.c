#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 504045196
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, float p_7, long long p_11)
{
  float v_9;
  long v_4;
  unsigned char v;
  long long result;
  v_9 = (float)p;
  v_4 = (long)p_11;
  v = (unsigned char)((double)(- ((float)(~ v_4) + - v_9)) + -884.298779716);
  v_4 = 62037L;
  result = (long long)(- (18446744073709500665ULL / (unsigned long long)(
                          (int)v + 461) - 452388233ULL) % (unsigned long long)(
                       (v_4 & (long)((int)p % ((int)((char)p_7) + 668))) + 729L));
  return result;
}


