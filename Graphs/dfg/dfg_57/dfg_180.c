#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347503504
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long long p_5, unsigned long long p_9[1][2], short p_13)
{
  short v_17;
  char v_15;
  float v_11;
  unsigned long long v_7;
  long long v;
  short result;
  v_17 = (short)p_9[0][1];
  v_15 = (char)53;
  v_7 = (unsigned long long)p_5;
  v_11 = (float)(((int)(- (! v_15)) - 56) ^ (int)v_17);
  result = (short)(4294948085U >> 26L);
  v = p_5 / (long long)((int)(! (! result)) + 189) + (long long)((double)(~ (
                                                                 v_7 % (
                                                                 p_9[0][0] + 718ULL))) + 
                                                                 (double)(
                                                                 v_11 + (float)v_7) * (
                                                                 -1.18995328384e+38 * (double)p_13));
  result = (short)(- (- ((int)result ^ (int)((short)((double)v * p)))));
  return result;
}


