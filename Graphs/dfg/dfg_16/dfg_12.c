#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 805817764
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, float p_5, double p_11, unsigned char p_13,
          float p_17)
{
  unsigned long v_15;
  signed char v_9;
  long long v_7;
  unsigned int v;
  float result;
  v_15 = 40830UL;
  v = 4294930192U;
  v_7 = (long long)(((double)((unsigned long)((int)p_13 % 64288) * - v_15) + 
                     -1388637811.97 / (double)((-518748800.f - p_17) + 1022.f)) - 494.17288208);
  v_9 = (signed char)-93;
  result = (float)(- (((unsigned long long)v & p) % ((unsigned long long)p_5 + 613ULL) + (unsigned long long)(
                      (v_7 * (long long)v_9) / (long long)(((int)((unsigned char)p_11) + (int)p_13) + 307))));
  result = result;
  return result;
}


