#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 837203994
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned long long p_4[3])
{
  signed char v_9;
  unsigned short v_7;
  long long v;
  unsigned char result;
  v_9 = (signed char)p_4[1];
  v = (long long)v_9;
  v_7 = (unsigned short)64244;
  result = (unsigned char)((unsigned long long)(- p) + (p_4[1] / 18446744073709534385ULL) / (unsigned long long)(
                                                       v * (long long)v_7 + 271LL));
  result = (unsigned char)(! (22143 + (int)(~ result)) - ((int)(2.96195701012e+38 - (double)(! p)) + 
                                                          46 % ((int)((signed char)1914889728.f) + 95)));
  return result;
}


