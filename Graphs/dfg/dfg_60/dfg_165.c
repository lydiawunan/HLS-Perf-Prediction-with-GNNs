#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681098265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long long p_7[1], unsigned long p_9)
{
  unsigned char v_13;
  unsigned short v_11;
  unsigned long v_4;
  signed char v;
  long long result;
  v_13 = (unsigned char)p_9;
  v_11 = (unsigned short)p_7[0];
  result = (long long)(p_9 * (unsigned long)(! v_11) + (unsigned long)(! (! v_13)));
  v = (signed char)((long long)(~ (-68 - (int)p)) - 1);
  v_4 = (unsigned long)(- (! ((int)(~ v) * (int)((signed char)-8681588736.f))));
  result = - (~ (~ result * (long long)((unsigned long)v % (v_4 + 964UL))));
  return result;
}


