#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036848503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned int p_7, float p_9, short p_11, long long p_19)
{
  unsigned long long v_21;
  long long v_17;
  unsigned long v_15;
  double v_13;
  int v_4;
  long long v;
  double result;
  v_21 = (unsigned long long)p;
  v_17 = (long long)p;
  v_15 = 76406396UL;
  v_13 = (double)(~ ((long)-7366075968.4 * p) % (long)(- (58613 << ((
                                                                    4294967209UL + v_15) & 15UL)) + 120));
  v_4 = (int)(((long long)p_11 / (p_19 + 973LL)) % 143836638LL + (long long)(
              - (9113626624.f + (float)p_11) / ((float)((unsigned long long)(
                                                        93 * (int)p_11) - 
                                                        30817ULL / (v_21 + 182ULL)) + 686.f)));
  v = ~ ((long long)v_15 & ~ ((long long)v_13 + v_17));
  result = (double)((! v / (long long)(((long)v_4 + p) + 346L)) / (long long)(
                    p_7 + 1011U) + (long long)(((int)((short)p_9) * (int)p_11 - 
                                                (int)p_11 % -2294) | (int)(
                                               - v_13 + -11888.)));
  return result;
}


