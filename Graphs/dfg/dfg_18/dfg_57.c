#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 605535751
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, long long p_5, long p_7, unsigned char p_9[4][1],
                unsigned int p_13)
{
  char v_19;
  unsigned long v_17;
  unsigned short v_15;
  float v_11;
  signed char v;
  signed char result;
  v_19 = p;
  v_15 = (unsigned short)33910;
  v = (signed char)p_5;
  v_17 = (unsigned long)((-41.f / (((float)((unsigned long)v_19 * 58844UL) - (
                                    (float)p_9[2][0] + 7189793792.f)) + 484.f)) * (float)p);
  v_11 = (float)((long long)(- (~ ((unsigned long)p - v_17))) % ((((long long)(! p_13) + (
                                                                   p_5 | -41112LL)) >> (
                                                                  (int)v & 63)) + 860LL));
  v = (signed char)(((unsigned int)(((int)p - (int)p_9[2][0]) + (int)v_11) % (
                     p_13 + 95U)) / (unsigned int)((int)v_15 + 812));
  result = (signed char)(0LL - (- ((long long)p % (p_5 + 263LL)) >> (
                                (long)(207 | (int)p) % ((69L + p_7) + 1000L) & 63L)));
  return result;
}


