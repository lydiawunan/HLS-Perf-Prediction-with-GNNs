#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 856221112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p[1], char p_5[1][4], int p_15)
{
  unsigned long long v_13;
  unsigned long v_11;
  unsigned int v_9;
  long long v_7;
  signed char v;
  unsigned short result;
  v_13 = 21462216ULL;
  v_11 = (unsigned long)p_15;
  v_7 = (long long)p_15;
  result = (unsigned short)41429;
  v_9 = (unsigned int)(! ((v_13 + 4294913587ULL) * (unsigned long long)p_15) + (unsigned long long)v_7);
  v = (signed char)(((unsigned long)(((unsigned int)result % (v_9 + 873U)) / (
                                     (unsigned int)-500923428188. + 284U)) - v_11) % 30UL);
  result = (unsigned short)((long long)v + - (- ((long long)result | v_7)));
  result = (unsigned short)(~ ((unsigned long)v - (p[0] ^ (unsigned long)p_5[0][3]) % (unsigned long)(
                                                  (int)(~ result) + 283)));
  return result;
}


