#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 777883830
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned long long p_9, long long p_11,
                   unsigned int p_13, float p_17)
{
  long v_21;
  signed char v_19;
  char v_15;
  char v_6;
  int v_4;
  float v;
  unsigned short result;
  v_19 = (signed char)79;
  v_6 = (char)51;
  if (~ (80254948198ULL * (unsigned long long)((long long)p * p_11)) < (unsigned long long)v_19) {
    v_4 = (int)v_6;
    v = (float)((unsigned long long)(~ (- v_4)) - (18446744073709517566ULL + (unsigned long long)(
                                                   v_4 * -15)));
    result = (unsigned short)v;
  }
  else {
    v_21 = (long)(! (~ p_11));
    v_15 = (char)(p_17 * (float)((long)((int)v_19 * (int)p) * v_21));
    result = (unsigned short)((((unsigned long long)p / (p_9 + 1023ULL)) % (unsigned long long)(
                               p_11 % -32072LL + 696LL)) / (unsigned long long)(
                              (- p_13 << (p_9 % (unsigned long long)(
                                          (int)v_15 + 683) & 31ULL)) + 777U));
  }
  return result;
}


