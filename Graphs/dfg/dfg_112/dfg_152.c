#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653268184
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long long p_7, unsigned long long p_9,
                       double p_17[2], unsigned short p_19)
{
  unsigned long long v_21;
  long v_15;
  int v_13;
  int v_11;
  signed char v_4;
  unsigned int v;
  unsigned long long result;
  v_21 = (unsigned long long)p_19;
  v_15 = (long)p;
  v_13 = 27086;
  v_4 = (signed char)p_9;
  result = 18446744073709544528ULL;
  v_11 = (int)(- ((double)(! (p_9 - 83ULL)) - (double)(~ result) / (p_17[1] + 606.)));
  result = (p_9 + (unsigned long long)(~ v_11)) / (unsigned long long)(
           ((long)v_13 + v_15 % ((long)p_17[0] + 857L)) + 22L) + 2757ULL / (
                                                                 ((unsigned long long)(
                                                                  (int)p_19 / (
                                                                  (int)((unsigned short)p_17[0]) + 455)) - (
                                                                  145ULL + v_21)) + 701ULL);
  v = (unsigned int)v_4;
  result = (417422406ULL / (unsigned long long)((15515U + v) / ((836350200U & (unsigned int)v_4) + 765U) + 195U)) % (
           (((unsigned long long)p - (unsigned long long)p * result) ^ (
            (unsigned long long)((long long)p + p_7) - p_9)) + 858ULL);
  return result;
}


