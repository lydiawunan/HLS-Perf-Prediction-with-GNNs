#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749222694
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[1][4], unsigned short p_7[4][5])
{
  long v_9;
  signed char v_5;
  char v;
  unsigned long result;
  v_9 = (long)p_7[3][4];
  v_5 = (signed char)p[0][3];
  v = (char)(- (~ (37706479LL ^ (long long)(-34614L - v_9))));
  v_5 = (signed char)(~ (! ((int)(! v) / ((int)v_5 + 680))));
  v = (char)((-128 + p[0][0]) * ((int)((signed char)2.88915284428e+38) - (int)(~ v_5)) + (int)p_7[3][2]);
  result = (unsigned long)((int)v / (- (~ p[0][3]) + 720) | (int)v);
  return result;
}


