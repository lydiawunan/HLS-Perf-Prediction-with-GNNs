#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952494004
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned char p_5)
{
  long v;
  unsigned short result;
  result = (unsigned short)61923;
  v = (long)result;
  if (v != (long)((27627 - (int)p) + (112 + ((int)p_5 + 891284126)))) 
    result = (unsigned short)63456;
  else result = (unsigned short)(~ 3125L);
  return result;
}


