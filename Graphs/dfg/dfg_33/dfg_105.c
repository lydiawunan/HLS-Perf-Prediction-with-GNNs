#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310953123
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, long long p_4, unsigned long long p_9, int p_11,
                 unsigned short p_15)
{
  char v_13;
  unsigned char v_7;
  unsigned char v;
  unsigned int result;
  v = (unsigned char)p_15;
  v_13 = (char)v;
  v_7 = (unsigned char)(~ (! ((int)((char)2.16509220915e+37f) * (int)v_13) / (
                           (int)p_15 + 776)));
  v = (unsigned char)((4294924305ULL / (((unsigned long long)((int)v_7 - (int)v) - p_9) + 161ULL)) % (unsigned long long)(
                      p_11 + 793));
  result = (unsigned int)(- (- p * (double)(~ p_4) - (double)(! v)));
  return result;
}


