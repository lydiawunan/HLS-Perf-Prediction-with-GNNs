#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581373856
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned short p_7, char p_9)
{
  long long v_11;
  unsigned long long v_4;
  short v;
  long result;
  v_11 = (long long)p_9;
  v_4 = 740569238ULL;
  result = (long)(- (32346LL * ! (3988531239LL ^ v_11)));
  v_4 = (unsigned long long)(((float)(! ((long)p_9 & result)) * - (-953.646118164f / (
                                                                   (float)v_4 + 211.f))) * 2.65863407113e+38f);
  v = (short)((unsigned long)(- result) / ((unsigned long)(- ((int)p_7 % (
                                                              (int)p_9 + 117))) / (
                                           (unsigned long)((long)p + result) / (unsigned long)(
                                           (4201922939U >> (v_4 & 31ULL)) + 827U) + 499UL) + 459UL));
  result = (long)(- ((double)(44159ULL + (unsigned long long)v / (v_4 + 406ULL)) + p));
  return result;
}


