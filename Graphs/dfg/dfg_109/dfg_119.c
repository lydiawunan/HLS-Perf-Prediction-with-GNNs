#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525006488
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, long p_7, unsigned long p_13)
{
  int v_11;
  unsigned long long v_9;
  unsigned char v_4;
  long long v;
  int result;
  v_11 = (int)p_13;
  v_4 = (unsigned char)232;
  v = (long long)p;
  v_9 = (unsigned long long)(4294960038UL - ! ((unsigned long)((long)v_11 - p_7) + ! p_13));
  v = (long long)((unsigned long long)((long long)(- v_4) ^ (v - (long long)(
                                                             (int)p * (int)p))) - (
                  (unsigned long long)(105L * p_7) / ((v_9 + 61ULL) + 817ULL) - 4ULL));
  result = (int)(! v);
  return result;
}


