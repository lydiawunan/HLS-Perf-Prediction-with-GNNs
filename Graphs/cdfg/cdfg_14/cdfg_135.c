#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 95179578
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, long p_9, signed char p_11,
                  double p_13)
{
  int v_6;
  char v_4;
  short v;
  unsigned char result;
  v = (short)p_11;
  result = (unsigned char)51;
  v_4 = (char)((double)(~ p_11) * p_13);
  while ((unsigned long)result > (unsigned long)(-260 + ((int)v >> 14))) {
    v_4 = (int)v_4 + 72;
    v_6 = (int)(p_9 / 68394051L);
    result = (unsigned char)((unsigned long long)(! v_6) * (p + 11809ULL) - (
                             (unsigned long long)(-4179LL / (long long)(
                                                  (int)result + 711)) + 
                             (unsigned long long)result / (p + 310ULL)));
    v = (short)result;
  }
  while_0_break: ;
  return result;
}


