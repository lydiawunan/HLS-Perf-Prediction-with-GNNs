#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1905312
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p)
{
  double v_9;
  unsigned long long v_6;
  short v_4;
  signed char v;
  unsigned short result;
  v_9 = 1.49645264493e+38;
  v = (signed char)v_9;
  v_6 = - (- (~ p)) ^ 642994536ULL;
  v_4 = (short)(! p);
  result = (unsigned short)((unsigned long long)(~ v) % (((unsigned long long)(- (
                                                          (int)v_4 % -3055)) - 
                                                          v_6 % 18446744073709525770ULL) + 244ULL));
  return result;
}


