#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 259946288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, long long p_9, float p_11, int p_13,
              unsigned long p_19)
{
  unsigned char v_17;
  unsigned long v_15;
  int v_7;
  float v_5;
  signed char v;
  long long result;
  v_17 = (unsigned char)p_9;
  v_15 = (unsigned long)p_9;
  v_5 = (float)(((double)p_13 + -2016405907.56) / ((double)(~ ((unsigned long long)v_15 - 18446744073709529254ULL) / (unsigned long long)(
                                                            ((unsigned long)v_17 & p_19) + 588UL)) + 502.));
  v_7 = ! -64987;
  v = (signed char)(~ (! (p_13 / 7730)));
  result = (long long)(23841 % (((int)p / ((int)v + 412)) / ((int)6.60779628944e+75 + 581) + 245) << (
                       ((long long)v_5 * ((long long)v_7 % (p_9 + 823LL)) | (long long)(
                        p_11 - (v_5 - -61969.f))) & 31LL));
  return result;
}


