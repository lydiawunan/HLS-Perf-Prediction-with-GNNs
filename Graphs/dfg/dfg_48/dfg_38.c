#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958812348
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, unsigned int p_9[5], short p_11,
                   long long p_19[4][3])
{
  unsigned long long v_17;
  unsigned short v_15;
  char v_13;
  char v_6;
  unsigned char v_4;
  long v;
  unsigned short result;
  v_17 = (unsigned long long)p_11;
  v_15 = (unsigned short)p_11;
  v_13 = (char)p_11;
  v = (long)p_19[3][0];
  v_4 = (unsigned char)(- (! (-758452417 - ((int)v_13 << (p_19[3][2] & 7LL)))));
  v_6 = (char)((unsigned long long)(~ ((unsigned int)p % (p_9[4] + 998U)) / 4294958220U) / (
               ((unsigned long long)(((long long)p_11 - -50216LL) * (long long)(
                                     (unsigned int)v_13 | 16297U)) - 
                (unsigned long long)((int)v_4 - (int)v_15) * ~ v_17) + 902ULL));
  result = (unsigned short)(~ ((v + (long)v_4) * 132L) + (long)(! v_6));
  result = result;
  return result;
}


