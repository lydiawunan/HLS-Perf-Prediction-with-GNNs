#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 655912752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, long long p_9, unsigned long p_11, float p_13,
          float p_17)
{
  int v_19;
  unsigned long long v_15;
  signed char v_7;
  unsigned long v_5;
  char v;
  short result;
  v_19 = 15836;
  v_15 = 4777110ULL;
  v = (char)(18446744073709489266ULL / ((unsigned long long)(-3461612800.f * (float)(
                                                             (499348321ULL * (unsigned long long)p) / 18446744073709551614ULL)) + 327ULL));
  v_5 = (unsigned long)((unsigned long long)((float)p_9 * ((float)(p_11 * 121UL) * - p_13)) | 
                        v_15 / (unsigned long long)(((int)(p_17 / (p_13 + 1001.f)) + v_19) + 221));
  v_7 = (signed char)418.987457275f;
  result = (short)((unsigned long)v - ((((unsigned long)p & v_5) - (unsigned long)v_7) - (unsigned long)1.62968692064e+14f));
  return result;
}


