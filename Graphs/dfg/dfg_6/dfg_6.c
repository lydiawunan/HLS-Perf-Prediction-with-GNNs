//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360134262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, long p_5, signed char p_7,
                  unsigned int p_9, int p_15)
{
  signed char v_17;
  unsigned long v_13;
  long v_11;
  int v;
  unsigned long result;
  v_17 = (signed char)p;
  v = -55443;
  v_11 = (long)(((unsigned long long)((p_15 + (int)p) * ((int)v_17 >> (
                                                         (int)v_17 & 7))) * (
                 39828ULL / (unsigned long long)((unsigned int)p_7 * p_9 + 612U))) % (unsigned long long)(
                p_15 + 538));
  v_13 = (unsigned long)((long)(- p_15 & (int)p_7) / (v_11 + 965L)) + (unsigned long)(
         (11296U / (p_9 + 827U)) * (unsigned int)((int)p_7 % ((int)p_7 + 760)) - p_9);
  result = (unsigned long)(~ (- (v_11 ^ (long)(492788594 << (v_13 & 31UL)))));
  result = 0UL - (unsigned long)(p_9 * (unsigned int)(0 % ((int)(2738170368.f * (float)result) + 352)));
  return result;
}


