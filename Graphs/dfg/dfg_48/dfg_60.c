#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 508379838
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, float p_7[3][2], unsigned char p_9)
{
  int v_13;
  unsigned short v_11;
  double v_5;
  long long v;
  unsigned short result;
  v_13 = -36814;
  v_11 = (unsigned short)43108;
  result = (unsigned short)25277;
  v_5 = (double)(! (-(unsigned short)10799));
  v = (long long)((unsigned int)(- (0 % ((int)v_11 + 19))) / (124U / (
                                                              (32968U % (
                                                               (unsigned int)p_7[2][0] + 737U) >> (
                                                               ! v_13 & 31)) + 55U) + 817U));
  result = (unsigned short)((long long)((int)(! (! result)) + (int)result) / (
                            (4294921425LL + p) + 716LL));
  result = (unsigned short)((14LL * v >> ((p - (long long)result) & 63LL)) / (
                            (long long)((845.241601684 + v_5) - 0.) + 271LL) + (
                            (long long)(p_7[1][0] * 14662.f - (float)(
                                        (int)p_9 * (int)p_9)) + 36877LL));
  return result;
}


