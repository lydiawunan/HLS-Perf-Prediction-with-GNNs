#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 258453017
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, short p_11, unsigned int p_13)
{
  unsigned short v_9;
  unsigned short v_7;
  signed char v_5;
  int v;
  short result;
  v_9 = (unsigned short)49171;
  v = 5492;
  v = (int)(- (~ (59876869ULL % (unsigned long long)((int)v_9 + 657)) * (unsigned long long)(
               v - 121)));
  v_7 = (unsigned short)p_13;
  v_5 = (signed char)(~ (3953066048U + (unsigned int)(~ v_7)) + (unsigned int)(- (
                      ((int)v_7 * (int)v_9) / ((int)(! p_11) + 897))));
  result = (short)((((unsigned long long)(-61562 + v) + 292460142ULL * (unsigned long long)p) | 950890024ULL) - (unsigned long long)v_5);
  return result;
}


