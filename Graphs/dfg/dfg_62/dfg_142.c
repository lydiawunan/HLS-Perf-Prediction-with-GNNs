#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 907144657
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p[2][2], float p_9, long long p_11,
              unsigned char p_15[2][1])
{
  unsigned char v_13;
  unsigned short v_7;
  unsigned int v_5;
  signed char v;
  long long result;
  v_13 = (unsigned char)162;
  v = (signed char)p_15[0][0];
  v = (signed char)(~ (- (! ((int)p_15[1][0] & (int)v))));
  v_7 = (unsigned short)v_13;
  v_5 = (unsigned int)(~ (~ ((p_11 % -12045LL) % (long long)((int)v + 705))));
  result = (long long)((unsigned long long)(- ((int)p[0][0] / (-106 % (
                                                               (int)v + 715) + 934))) * (
                       - ((unsigned long long)v_5 + 18446744072691305336ULL) % (
                       (unsigned long long)(- ((float)v_7 + p_9)) + 941ULL)));
  return result;
}


