#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 530995670
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned long p_7,
                 unsigned long long p_9[5], float p_13[1], long p_15)
{
  signed char v_17;
  unsigned short v_11;
  signed char v_4;
  long v;
  unsigned int result;
  v_17 = (signed char)50;
  v_11 = (unsigned short)p;
  v = -254090319L;
  v_4 = (signed char)((long long)p_13[0] - ! (37689LL | (long long)((unsigned long)p_15 - p_7)));
  v_11 = (unsigned short)((unsigned long long)((((unsigned long)p_13[0] * p_7) * 49UL) / (unsigned long)(
                                               ~ (! p_15) + 64L)) / (
                          - ((unsigned long long)((int)((unsigned short)1.73488308388e+38f) - (int)v_11) | 
                             p_9[3] / (unsigned long long)((int)v_17 + 91)) + 392ULL));
  v_4 = (signed char)(((unsigned long long)(~ p_7 % 938UL) % ((~ p_9[1] - (unsigned long long)(
                                                               (int)v_11 * (int)v_4)) + 171ULL)) / (unsigned long long)(
                      ~ (910L + -49L / (v + 75L)) + 44L));
  result = (unsigned int)((unsigned long long)(! v - ! v) % (3312838785ULL * (
                                                             (unsigned long long)v_4 + p) + 694ULL) - (unsigned long long)p_7);
  return result;
}


