#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1006731693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long long p_5, unsigned long long p_9,
          unsigned long p_11)
{
  unsigned int v_13;
  unsigned char v_7;
  unsigned int v;
  short result;
  v_13 = (unsigned int)p_11;
  v_7 = (unsigned char)p_9;
  if (((unsigned long long)(- v_7) / (p_9 + 109ULL)) * (unsigned long long)p_11 <= (unsigned long long)v_13) {
    v = (unsigned int)p;
    result = (short)p;
    result = (short)((unsigned long)((v / ((unsigned int)-2600128602.64 + 721U)) * (unsigned int)(~ result)) + (
                     4138379800UL + (unsigned long)((int)result * 562)));
  }
  else result = (short)(- (~ (~ p)));
  return result;
}


