#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 712017921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p)
{
  unsigned int v_6;
  long v_4;
  signed char v;
  short result;
  v_6 = (unsigned int)p;
  v = (signed char)p;
  result = (short)p;
  v_6 = ! ((unsigned int)p + ~ (- v_6));
  v_6 = ! (- (4294967246U + ~ v_6));
  v_4 = (long)(18446744073178110730ULL + (unsigned long long)v_6);
  result = (short)(! (((unsigned long long)result | 20772ULL) - (unsigned long long)(
                      (long)v & v_4)) * (unsigned long long)(- (! (-10 ^ (int)result))));
  return result;
}


