#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532912484
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[3][5])
{
  double v_13;
  char v_11;
  unsigned short v_9;
  unsigned short v_6;
  long v_4;
  unsigned short v;
  unsigned short result;
  v_13 = 2.85297087195e+38;
  v_11 = (char)p[2][0];
  v_9 = p[1][0];
  v = p[2][0];
  v_4 = (long)(- (((int)v_9 / 74) * (int)(! v_11) & (int)v_13));
  result = (unsigned short)65445;
  v_6 = (unsigned short)(! (! (15 - (int)p[2][0]) + ! (27315 * (int)v_9)));
  result = (unsigned short)((-1LL + (long long)((int)(! v) + (int)result)) / (long long)(
                            v_4 / (long)((int)v_6 + 281) + 69L));
  return result;
}


