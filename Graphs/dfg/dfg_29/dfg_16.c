#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952849259
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, int p_4, long p_7, float p_9, short p_13)
{
  unsigned short v_15;
  unsigned int v_11;
  long long v;
  long result;
  v_15 = (unsigned short)62484;
  v_11 = (unsigned int)p_7;
  v = (long long)v_15;
  result = (long)p_4;
  result = (long)((long long)(4294967238UL - ! ((unsigned long)result & (unsigned long)v_11)) * (
                  - (20998LL % (long long)(p_4 + 734)) + (long long)(
                  (float)(result % (long)((int)p_13 + 786)) / -34.6440429688f)));
  result = (long)(((long long)((long)((int)p % (p_4 + 199)) + ((long)p_4 - result)) & ~ (
                   58584LL - v)) / (long long)((p_7 * (long)p - (long)(- p_9)) / 112L + 33L));
  return result;
}


