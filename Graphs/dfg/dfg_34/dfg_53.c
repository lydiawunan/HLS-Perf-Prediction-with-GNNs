#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 876297331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_4, unsigned short p_7,
         unsigned int p_11, long long p_13)
{
  short v_9;
  long v;
  char result;
  v_9 = (short)p_4;
  v = (long)(~ (- (~ p_13)));
  result = (char)((8951ULL * ((unsigned long long)p * p_4) + (unsigned long long)(
                   p - (unsigned long)(v + v))) - (unsigned long long)(
                  (unsigned int)p_7 + (unsigned int)v_9 % (3223709911U % (
                                                           p_11 + 24U) + 543U)));
  return result;
}


