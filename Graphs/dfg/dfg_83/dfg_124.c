#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 300120478
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, long long p_5, unsigned char p_7, unsigned int p_9,
        long long p_13[1])
{
  long long v_17;
  unsigned int v_15;
  long v_11;
  double v;
  int result;
  v_17 = (long long)p_7;
  v_15 = 171078073U;
  v_11 = (long)(-2.37425425176e+37 / ((double)p + 183.));
  result = (int)(- (! ((unsigned long)v_11 + 4294964932UL)) % ((unsigned long)(
                                                               (float)(
                                                               (long long)p_9 / (
                                                               (long long)v_15 * v_17 + 144LL)) / (
                                                               -859.056884766f * (float)(~ p_9) + 100.f)) + 967UL));
  v = (double)((long long)((unsigned long)(- p_9) / (unsigned long)(111L * v_11 + 302L) ^ 3496025458UL) % (
               ((long long)result % ((p_13[0] | (long long)p_9) + 412LL)) % 396LL + 1021LL));
  result = (int)((unsigned long long)(52630722UL - (unsigned long)((v - 858166569.) + (double)(- p))) - 
                 (18446744073242886185ULL * (unsigned long long)(~ p_5)) * (unsigned long long)p_7);
  return result;
}


