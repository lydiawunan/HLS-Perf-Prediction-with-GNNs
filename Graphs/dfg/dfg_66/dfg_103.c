#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071950384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, int p_9, char p_11, unsigned char p_13,
                  unsigned long p_15)
{
  long long v_17;
  long v_7;
  double v_4;
  unsigned long long v;
  unsigned long result;
  v_17 = (long long)p_13;
  v_4 = (double)p_11;
  result = 301092019UL;
  v_7 = (long)(! (unsigned char)162);
  v = (unsigned long long)((- (v_17 - (long long)p_9) + (long long)(! p_15)) / (long long)(
                           ! ((unsigned long)v_7 % (result + 547UL)) / (unsigned long)(
                           p_9 + 165) + 875UL));
  result = (unsigned long)((unsigned long long)(result / (((unsigned long)v_4 | result) + 488UL) | (unsigned long)(- p_9)) * (
                           ((unsigned long long)((int)p_11 - (int)p_13) % (
                            ((unsigned long long)p_15 - v) + 120ULL)) % (unsigned long long)(
                           (3274173133UL ^ (unsigned long)p) % (unsigned long)(
                           (int)p_11 * (int)p_11 + 412) + 327UL)));
  result = (unsigned long)((long)((double)(1716156.f * (-1.02945012819e+38f - (float)result)) / (
                                  ((double)v / (v_4 + 587.) + (double)(
                                   214 * (int)p)) + 316.)) % (v_7 + 295L));
  return result;
}


