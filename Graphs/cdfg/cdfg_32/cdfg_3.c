#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 200536882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p[5][2], unsigned short p_4,
                   unsigned long long p_6, double p_8, short p_10)
{
  double v_19;
  unsigned long long v_17;
  unsigned long long v_15;
  char v_13;
  unsigned long long v;
  unsigned short result;
  v_19 = 2.25063295028e+38;
  v_17 = 18446744073477248308ULL;
  v_15 = (unsigned long long)p[4][1];
  v_13 = (char)94;
  v = 61341ULL;
  result = (unsigned short)47788;
  while ((unsigned long long)((42771LL / (long long)(p[1][1] + 1013U)) * (long long)p[4][0] >> (
                              25500 % ((int)v_13 + 131) & 63)) != p_6 / (unsigned long long)(
                                                                  (int)result + 1006)) {
    v_15 = (unsigned long long)v_19 % (v_17 / ((v_15 - 18446744073709496623ULL) + 1004ULL) + 282ULL);
    v_19 = (double)(8552 + ((int)(- p_10) - (int)result));
    result = (unsigned short)(-6 % ((int)(! (! p_4)) + 270));
    v_13 = (char)p[3][0];
  }
  while_0_break: ;
  if ((unsigned long long)p_4 > ((p_6 + (unsigned long long)p_8) + (unsigned long long)(~ p_10)) % (
                                (v * (unsigned long long)p_10) / ((v + (unsigned long long)p_8) + 879ULL) + 303ULL)) 
    result = (unsigned short)45841;
  else result = (unsigned short)(- (! p[4][1]));
  return result;
}


