#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 87712398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, float p_7, float p_9, unsigned char p_11,
          unsigned long long p_15)
{
  unsigned char v_17;
  long v_13;
  unsigned int v_5;
  unsigned long v;
  float result;
  v_17 = (unsigned char)p;
  v_13 = 38768L;
  v = (unsigned long)v_17;
  v_5 = (unsigned int)((unsigned long long)(((long)((int)p_11 + 108) / (
                                             (99L + v_13) + 836L)) * (long)(- p_11)) / (
                       (unsigned long long)((int)(- p_11) << (~ v_13 & 7L)) * p_15 + 291ULL));
  result = (float)((((unsigned int)p_7 * 4294945609U << ((int)((short)p_9) % -13613 & 31)) + (unsigned int)(- (! p_11))) % (
                   (unsigned int)(- (-2.32439071054e+38f + (float)((unsigned long long)v_5 ^ 18446744073709536565ULL))) + 375U));
  result = (float)((unsigned long)p / ((unsigned long)(-108 / ((int)((char)result) + 33) & -23464299) / (
                                       (v - 28591UL) / (unsigned long)(
                                       ((unsigned int)-1.09098249679e+38f - v_5) + 646U) + 4UL) + 737UL));
  return result;
}


