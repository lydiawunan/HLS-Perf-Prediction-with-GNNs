#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 841702392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long long p_4, int p_7,
                  long long p_13)
{
  unsigned long long v_15;
  long long v_11;
  char v_9;
  long long v;
  unsigned char result;
  v_15 = 36264ULL;
  v_11 = (long long)p_7;
  result = (unsigned char)p_7;
  v = (long long)result;
  v_9 = (char)(- v_15);
  v = (long long)(((unsigned long long)((long long)(p_7 * (int)v_9) - 330LL) & 17920165715073172177ULL) - (unsigned long long)(
                  - (! v) + ((-66LL | v_11) + - p_13)));
  result = (unsigned char)(~ (((unsigned long long)p / (p_4 + 755ULL)) % (unsigned long long)(
                              v + 732LL) << (~ ((int)p + 9399) & 63)));
  return result;
}


