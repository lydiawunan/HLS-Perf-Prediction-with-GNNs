#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532952868
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p[5], double p_5, int p_9[3][1][3],
                  double p_13[4][3], long long p_15)
{
  unsigned long v_11;
  unsigned long v_7;
  unsigned short v;
  unsigned long result;
  v_7 = 4294930714UL;
  v = (unsigned short)6888;
  v_11 = (unsigned long)((long long)(- v_7) / ((33130LL * (4294914213LL % (
                                                           p_15 + 736LL)) | p_15) + 656LL));
  v_7 = (unsigned long)((long long)((466369793. + ((double)v_11 + p_13[1][2])) / (
                                    (double)((long long)v % (p_15 + 322LL)) + 715.)) - (
                        3849849972LL | p_15));
  v = (unsigned short)(~ ((long long)v_7 / (! p[2] + 431LL) + (long long)(- (~ p_9[0][0][0]))));
  result = (unsigned long)((p[3] << ((int)v & 63)) ^ (long long)p_5);
  return result;
}


