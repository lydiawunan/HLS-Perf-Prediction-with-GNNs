#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17931953
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p[3][5])
{
  short v_13;
  long long v_11;
  char v_8;
  short v_6;
  unsigned long long v_4;
  int v;
  signed char result;
  v_13 = (short)p[1][3];
  v_11 = 22875LL;
  v_8 = (char)p[2][1];
  v_4 = (unsigned long long)(! (- (- (! v_13))));
  v_6 = (short)10035;
  v = (int)((! v_4 + (unsigned long long)((int)v_6 - (int)(! v_8))) * (unsigned long long)(- (
            (double)p[0][4] - (double)v_11 * 1.90779295502e+38)));
  result = (signed char)v;
  return result;
}


