#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1070453814
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p[2][2], unsigned long p_9, double p_11)
{
  float v_6;
  unsigned long long v_4;
  long long v;
  long long result;
  v_4 = (unsigned long long)p_9;
  result = (long long)p_9;
  v_6 = (float)result;
  v = (long long)(v_6 * (float)(((int)(- p[0][1]) % ((int)(~ p[0][0]) + 882)) / (
                                (int)((double)(~ p_9) / (4294928692. * p_11 + 802.)) + 1015)));
  result = (long long)((unsigned long long)v % (v_4 + 333ULL));
  result = result;
  return result;
}


