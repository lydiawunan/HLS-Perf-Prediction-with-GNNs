#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409466948
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[2], unsigned char p_7, long p_9, long p_13,
                  unsigned short p_15)
{
  unsigned long long v_17;
  int v_11;
  unsigned short v_5;
  long long v;
  unsigned long result;
  v_5 = (unsigned short)53941;
  v_17 = (unsigned long long)(! ((unsigned long)p_7));
  if (18446744073709551563ULL != (v_17 / (unsigned long long)(((int)p_15 + (int)p[0]) + 2)) * (unsigned long long)(
                                 (int)p_7 / 725)) {
    v = (long long)p_9;
    result = (unsigned long)((long)(! ((int)p[1] % ((int)v_5 + 80))) + (
                             (long)p_7 + 1283651370L));
    result = (unsigned long)((long long)result * v ^ (long long)(! result - (unsigned long)(~ p[0])));
  }
  else {
    v_11 = (int)(- (0.f * ((float)p_15 - 120.811645508f)));
    result = (unsigned long)(((long long)(v_11 | 52882) | ((long long)p_13 & -5703LL)) % 475824388LL);
  }
  return result;
}


