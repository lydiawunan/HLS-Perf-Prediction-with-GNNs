#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 111511025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[1][2][3], short p_5, unsigned int p_13, long long p_15)
{
  unsigned int v_11;
  char v_9;
  short v_7;
  double v;
  char result;
  v_11 = 49676U;
  v = 640.572661001;
  v_9 = (char)-107;
  if ((unsigned int)v_9 != ! (p_13 % (unsigned int)((int)p_5 + 986)) >> (
                           (758392740ULL - (unsigned long long)(~ p_15)) & 31ULL)) {
    v_9 = (char)p_5;
    v_7 = (short)((long long)(- (- v_9)) / (((long long)v_11 % 28007LL - (long long)(
                                             -983.875244141 * v)) + 679LL));
    result = (char)(((int)v - (int)p[0][1][0] / ((int)p_5 + 857)) * (int)(! (~ v_7)));
  }
  else result = (char)39;
  return result;
}


