#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016062343
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, signed char p_9,
                  unsigned long long p_11[5][1][2], signed char p_13)
{
  char v_7;
  unsigned long long v_5;
  unsigned short v;
  unsigned long result;
  v_7 = (char)p;
  v = (unsigned short)(! (! (! 271319802)));
  v_5 = (unsigned long long)(~ ((18 + (int)v_7) * (int)(- p_9))) / (! p_11[4][0][1] * (unsigned long long)p_13 + 961ULL);
  result = (unsigned long)v_5;
  result = (unsigned long)((unsigned long long)(~ (p / (unsigned int)(
                                                   (int)v % 85 + 435))) * (
                           (unsigned long long)(! result) | v_5));
  return result;
}


