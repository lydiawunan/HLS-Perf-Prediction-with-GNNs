#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 954741407
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p)
{
  unsigned char v_9;
  unsigned long long v_7;
  signed char v_5;
  unsigned char v;
  char result;
  v_9 = (unsigned char)209;
  v_7 = (unsigned long long)p;
  v = (unsigned char)p;
  v_5 = (signed char)((unsigned long long)(170LL / (((long long)v_9 | 32075458LL) + 787LL)) + ! (
                      v_7 & (unsigned long long)p));
  result = (char)((unsigned long long)(((unsigned int)v - p) * (unsigned int)(- v_5)) & v_7);
  return result;
}


