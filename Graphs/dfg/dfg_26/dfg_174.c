#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 987918322
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, int p_4, unsigned long p_6,
                  long long p_9, long long p_11)
{
  unsigned char v_13;
  char v;
  unsigned char result;
  v_13 = (unsigned char)(- (~ (p_11 ^ p_11)));
  v = (char)(p_11 / (long long)((int)v_13 + 920));
  v = (char)((long long)(! v) * p_9);
  result = (unsigned char)(! (((unsigned long)((int)p << (p_4 & 15)) - 
                               p_6 % 37289UL) % (unsigned long)((int)(- (- v)) + 457)));
  return result;
}


