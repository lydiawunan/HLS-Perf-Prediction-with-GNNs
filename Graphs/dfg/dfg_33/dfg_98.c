#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 817727832
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[4][1][1])
{
  long long v_7;
  char v_5;
  double v;
  char result;
  v = 1.4233901315e+38;
  result = (char)p[1][0][0];
  v_5 = (char)v;
  v_7 = (long long)-6665523200.f;
  v = (double)((long long)((int)(~ p[3][0][0]) % (- ((int)v_5 * 18) + 1018)) % (
               ((long long)p[2][0][0] | - v_7) + 465LL));
  result = (char)((4294921357UL + (unsigned long)((int)(- v) | (int)p[1][0][0] * (int)result)) - (unsigned long)(- v));
  return result;
}


