#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 546809553
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[1][5][5], long p_5, float p_11, long long p_13)
{
  unsigned int v_15;
  float v_9;
  float v_7;
  unsigned int v;
  double result;
  v_15 = 4033U;
  v_9 = (float)p_13;
  result = (double)(~ ((long long)p_11 | (p_13 * -968831655LL) % (long long)(
                                         ! v_15 + 322U)));
  v_7 = (float)((unsigned long)(- p[0][1][0]) ^ (unsigned long)p_5 % (
                                                (0UL - (11508UL - (unsigned long)p_5)) + 389UL));
  v = (unsigned int)(result / (double)(- (45450.f / (v_7 + 122.f)) + 206.f) + (double)v_9);
  result = (double)(4294934252UL + ~ ((unsigned long)(v * (unsigned int)p[0][4][4]) % (unsigned long)(
                                      p_5 + 799L)));
  return result;
}


