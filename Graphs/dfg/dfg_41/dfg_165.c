#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 791203022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned int p_5, char p_7, int p_11)
{
  char v_15;
  unsigned int v_13;
  float v_9;
  long long v;
  int result;
  v_15 = (char)p;
  v_13 = (unsigned int)p_7;
  result = (int)(! (- (-60852LL + (long long)v_15)) / -227906730LL);
  v_9 = (float)(! (! (0 % (! v_13 + 903U))));
  v = (long long)((((p + (unsigned long long)result) ^ (unsigned long long)result / (
                                                       p + 946ULL)) + 
                   (unsigned long long)(result * result) % (p + 659ULL)) / (unsigned long long)(
                  (18734U + p_5 * (unsigned int)p_7) % (((unsigned int)(
                                                         v_9 / ((float)p_11 + 538.f)) + 
                                                         (unsigned int)p_11 / (
                                                         p_5 + 528U)) + 930U) + 123U));
  result = (int)((unsigned long long)(690LL + v) / 18213ULL);
  return result;
}


