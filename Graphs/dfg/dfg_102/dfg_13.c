#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628468620
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long p_9)
{
  unsigned int v_15;
  unsigned long v_13;
  unsigned int v_11;
  short v_6;
  unsigned long v_4;
  int v;
  float result;
  v_15 = (unsigned int)p;
  v_13 = 897885298UL;
  v_11 = 4037469207U;
  v_6 = (short)p_9;
  result = 1.69775410486e+38f;
  v_6 = (short)(! ((int)v_6 * 4381680));
  v_4 = (unsigned long)((unsigned long long)((unsigned long)((int)p % (
                                                             (int)p + 869)) % (
                                             (p_9 + (unsigned long)v_11) + 755UL)) * (
                        28549696ULL << (31906UL % (v_13 + 169UL) & 63UL)) - (unsigned long long)(~ (- (
                        52U * v_15))));
  v = (int)((unsigned long long)((unsigned long)(((float)v_4 - result) - (float)(
                                                 -43 >> (v_4 & 7UL))) ^ v_4) - 
            (unsigned long long)(! v_6) % 54142ULL);
  result = (float)v;
  return result;
}


