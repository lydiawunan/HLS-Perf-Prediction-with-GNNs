#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 296564074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, double p_5[1][4], unsigned short p_11, short p_15)
{
  signed char v_17;
  unsigned short v_13;
  unsigned char v_9;
  unsigned long long v_7;
  signed char v;
  char result;
  v_17 = (signed char)p_15;
  v_13 = (unsigned short)p_15;
  v_7 = 376163193ULL;
  v = (signed char)(- -259287658LL);
  v_9 = (unsigned char)((! ((unsigned long long)p_15 + 18446744072881796062ULL) / (unsigned long long)(
                         (int)v_17 + 407)) % 1ULL);
  result = (char)(((unsigned long long)((int)v - (int)((signed char)p_5[0][3])) % (
                   v_7 * (unsigned long long)v_9 + 847ULL)) % 18446744073709551615ULL - (unsigned long long)(! (
                  (int)(~ p_11) * (int)(~ v_13))));
  result = (char)(~ (- (~ p) % (unsigned int)((int)result + 498)));
  return result;
}


