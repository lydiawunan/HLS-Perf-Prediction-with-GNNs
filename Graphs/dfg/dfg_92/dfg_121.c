#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 616492179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned long long p_9, int p_11,
                       long long p_15, int p_17)
{
  char v_13;
  double v_7;
  unsigned long v_4;
  unsigned short v;
  unsigned long long result;
  v_7 = -52922662.7334;
  v_13 = (char)(~ (48350ULL << (p_15 & 63LL)) - (unsigned long long)(~ (
                (unsigned long)(- p_17) + 2009172UL)));
  v_4 = (unsigned long)(- (p_11 | (int)((unsigned char)-99.0285949707f) * 57) | (int)(~ v_13));
  v = (unsigned short)(! (- v_4 * (60919UL % (p + 898UL)) - (unsigned long)(
                          v_7 * (double)p_9)));
  result = (unsigned long long)(! (! (! ((unsigned int)v / 4294941060U))));
  return result;
}


