#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 622646010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, unsigned short p_7, long long p_11,
                  unsigned char p_17)
{
  char v_15;
  unsigned long long v_13;
  long v_9;
  unsigned short v_4;
  signed char v;
  unsigned char result;
  v_15 = (char)p;
  v_13 = 18446744073709496779ULL;
  v_4 = (unsigned short)p;
  v = (signed char)p;
  result = (unsigned char)3;
  v_9 = (long)(- (~ (~ v_13)) & (unsigned long long)((int)(! v_15) * (int)(! p_17) & (int)(~ v_4)));
  v_4 = (unsigned short)((-532LL + ((long long)(! v_9) | ~ p)) ^ - ((long long)(
                                                                    (int)v % (
                                                                    (int)result + 345)) + - p_11));
  v = (signed char)((long)p_7 - v_9);
  result = (unsigned char)(~ ((long long)(! v) - ((long long)v_4 + p)) * - (
                           ((long long)v_4 - p) >> 34));
  return result;
}


