#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822152025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, long long p_7[4], char p_9, long long p_11[5], int p_13)
{
  unsigned int v_17;
  long v_15;
  unsigned long v_5;
  long long v;
  long long result;
  v_17 = 3755665965U;
  v_15 = -61344L;
  result = (long long)(! v_17);
  v_5 = (unsigned long)(((unsigned long long)p_13 + (((unsigned long long)p_11[4] + 408549638ULL) - (unsigned long long)p)) / (
                        ((unsigned long long)(result % (long long)((-58L | v_15) + 894L)) ^ 415614205ULL) + 541ULL));
  v = (long long)v_5;
  result = - (! (v - (long long)p)) + ((long long)(- (! v_5)) | (- p_7[3] + 
                                                                 (long long)p_9 / (
                                                                 p_11[0] + 200LL)));
  return result;
}


