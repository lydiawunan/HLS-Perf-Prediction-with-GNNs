#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59655093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[4][4][4])
{
  unsigned long long v_5;
  char v;
  unsigned char result;
  v_5 = 18446744073547286419ULL;
  result = (unsigned char)(! (v_5 - 475247155ULL));
  v = (char)p[1][3][0];
  result = (unsigned char)((int)(- (~ result)) * (int)((unsigned char)-1.33765267491e+37f));
  result = (unsigned char)((18768UL / (unsigned long)((int)v + 1019)) / (unsigned long)(
                           (int)result + 12) - (unsigned long)((int)((short)(
                           - p[0][2][1] - (double)result))));
  return result;
}


