#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 36278529
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p[2][5], unsigned short p_5, short p_11,
                  unsigned short p_15)
{
  long long v_17;
  short v_13;
  unsigned char v_9;
  long long v_7;
  unsigned int v;
  unsigned long result;
  v_17 = 59427LL;
  v_13 = (short)p_5;
  v_9 = (unsigned char)204;
  v = 22489U;
  v_7 = (long long)v_9;
  v_9 = (unsigned char)(! ((long long)(p[0][0] % (unsigned int)((int)p_15 + 301)) - v_17) * (long long)v_13);
  v_13 = (short)-13359;
  result = (unsigned long)((long long)(((p[0][1] + v) ^ (unsigned int)(~ p_5)) << (
                                       ((long long)p[0][4] ^ 132LL / (
                                                             v_7 + 51LL)) & 31LL)) + (
                           790045704LL << ((((int)v_9 | (int)p_11) + (int)v_13) & 63)));
  return result;
}


