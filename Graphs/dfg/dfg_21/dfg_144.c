#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1004512606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long p_7, char p_11[3][2])
{
  unsigned short v_9;
  long v_4;
  int v;
  long long result;
  v = 851104143;
  v_9 = (unsigned short)219;
  v_4 = (long)((unsigned long long)(-77 - v) - ((unsigned long long)v_9 + 
                                                (unsigned long long)(- p_11[1][0]) % 25052ULL));
  v = (int)(510941399L >> (- (p % (p_7 + 983UL)) / 4294967206UL & 31UL));
  result = (long long)((long)v * v_4);
  return result;
}


