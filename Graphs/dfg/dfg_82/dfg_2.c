#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 185846709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned long long p_11)
{
  unsigned long v_9;
  unsigned long v_7;
  unsigned long v_4;
  double v;
  unsigned int result;
  v_4 = (unsigned long)p;
  v = (double)(! (-0ULL));
  v_9 = v_4;
  v_7 = (! (v_9 * 4294940924UL) - (unsigned long)(p - (long)(-2754089216.f + (float)p_11))) / (unsigned long)(
        (! (3380537721U | (unsigned int)-2.40132330993e+38f) << (- (! p) & 31L)) + 843U);
  result = (unsigned int)(-50666.8867188f / ((float)((unsigned long)(
                                                     v * -694528450.194) + (
                                                     v_4 & (unsigned long)p)) + 330.f) - (float)(~ (! (
                          v_7 + 22434UL))));
  return result;
}


