#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774355598
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_4, short p_9,
                       long long p_11)
{
  long v_7;
  unsigned char v;
  unsigned long long result;
  v_7 = (long)(- -984.405029297f);
  v = (unsigned char)p_11;
  result = (unsigned long long)p_9;
  result = ((unsigned long long)(p * (unsigned int)p_4 - (unsigned int)(~ v)) + result) % (unsigned long long)(
           3477774096UL / (unsigned long)(v_7 + 766L) + 531UL);
  return result;
}


