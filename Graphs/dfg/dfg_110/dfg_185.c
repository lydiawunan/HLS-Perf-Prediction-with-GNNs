#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930892802
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, long long p_5, float p_7, long p_9,
                       double p_11)
{
  unsigned long v_17;
  unsigned int v_15;
  int v_13;
  unsigned short v;
  unsigned long long result;
  v_17 = 31388UL;
  v_13 = (int)p;
  result = 18446744072814837255ULL;
  v_15 = (unsigned int)v_13;
  v = (unsigned short)((unsigned long)(0 % ((unsigned int)(((double)v_13 / (
                                                            p_11 + 910.)) / (
                                                           (double)((unsigned long long)p_11 & result) + 142.)) + 984U)) / (
                       (unsigned long)(! ((long)p * p_9)) % (((4294913329UL + (unsigned long)v_15) & 
                                                              v_17 * 25517UL) + 736UL) + 997UL));
  result = (unsigned long long)(0 % (long long)(((int)((unsigned short)p_11) - (int)v) + 143) & (long long)(
                                p_7 / 4294936320.f)) ^ (unsigned long long)(
                                                       (long long)(p_11 * (double)p_9) / (
                                                       ~ p_5 + 654LL)) % 18446710740727482701ULL;
  result = (unsigned long long)((double)((float)(result - (unsigned long long)(
                                                 (int)v * 103)) / ((float)(
                                                                   (long long)p % (
                                                                   p_5 + 292LL)) * (
                                                                   p_7 / 981.f) + 126.f)) / (
                                - ((double)(! p_9) + (p + p_11)) + 414.));
  return result;
}


