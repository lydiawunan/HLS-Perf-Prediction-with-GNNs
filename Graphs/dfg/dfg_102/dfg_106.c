#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 913633843
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p)
{
  unsigned char v;
  signed char result;
  v = (unsigned char)98;
  result = (signed char)((unsigned long long)v - ((unsigned long long)p + 
                                                  (unsigned long long)(
                                                  6259L % ((long)p + 613L)) % (
                                                  (842625988ULL + (unsigned long long)v) + 881ULL)));
  return result;
}


