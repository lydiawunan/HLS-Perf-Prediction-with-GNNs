#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109122478
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, char p_9, unsigned long long p_11[4][1][4])
{
  signed char v_7;
  unsigned short v_5;
  unsigned int v;
  unsigned short result;
  v_7 = (signed char)p_9;
  v_5 = (unsigned short)p;
  v = (unsigned int)(~ ((unsigned long long)((int)v_5 ^ (int)v_7) / (
                        (unsigned long long)p_9 * p_11[1][0][1] + 414ULL)));
  result = (unsigned short)(- (! ((unsigned long)p * (unsigned long)v)));
  return result;
}


