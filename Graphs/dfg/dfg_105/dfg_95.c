#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 304206922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[2][4][4], long p_7)
{
  long long v_9;
  unsigned long v_4;
  unsigned short v;
  int result;
  v_9 = (long long)p_7;
  v = (unsigned short)31649;
  result = 622232696;
  v_4 = (unsigned long)((unsigned long long)(-188028108800. + (double)v / (
                                                              p[1][1][0] + 647.)) / (
                        (unsigned long long)(~ (109LL * v_9)) % 10ULL + 187ULL));
  v = (unsigned short)(! (~ ((unsigned long)result & v_4)) + (unsigned long)(
                       (long)result % ((long)(-17. / (p[0][0][3] + 841.)) % (
                                       p_7 + 783L) + 356L)));
  result = ! (17871 / ((int)v + 34));
  return result;
}


