#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114479234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p[4][4][5], long long p_11, int p_13,
                  char p_19[5])
{
  signed char v_17;
  signed char v_15;
  unsigned short v_9;
  signed char v_6;
  char v_4;
  unsigned short v;
  unsigned long result;
  v_17 = (signed char)16;
  v_15 = (signed char)-59;
  v_4 = (char)52;
  v_9 = (unsigned short)((long long)((int)v_4 + 45576) * (((long long)v_17 ^ - p[3][3][1]) + (long long)(
                                                          (unsigned long)p_19[4] + 2087286464UL)));
  v = (unsigned short)(- v_15);
  v_6 = (signed char)((((long long)v - (p[1][3][1] - (long long)v_9)) + p_11) % (long long)(
                      ~ (~ p_13 - 184) + 899));
  result = (unsigned long)((int)(- (- v)) - (~ ((int)v_4 - 3) + ((int)v_4 - (int)v_6)));
  return result;
}


