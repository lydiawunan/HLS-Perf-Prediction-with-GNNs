#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 64833477
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_5, int p_7[4][2],
                       long p_11)
{
  short v_9;
  long v;
  unsigned long long result;
  v_9 = (short)p_11;
  v = (long)(((unsigned long long)((long long)((int)p * 84) % (p_5 + 68LL)) + - (
              (unsigned long long)p_7[3][0] ^ 18446744073709517547ULL)) + (unsigned long long)(
             (long)v_9 ^ -895328826L));
  result = (unsigned long long)v;
  return result;
}


