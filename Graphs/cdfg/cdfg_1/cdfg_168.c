#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 740872147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, long long p_5, unsigned long long p_7, short p_11)
{
  unsigned short v_9;
  unsigned long v;
  unsigned char result;
  v_9 = (unsigned short)p_7;
  v = (unsigned long)(- (p_7 * (unsigned long long)v_9) & ((unsigned long long)(- p_11) ^ 
                                                           p_7 * 126ULL));
  result = (unsigned char)((long long)(~ (v * (unsigned long)p)) + p_5);
  return result;
}


