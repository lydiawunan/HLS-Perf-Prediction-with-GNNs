#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743094544
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[4][1], unsigned long long p_7, signed char p_11)
{
  unsigned long long v_9;
  char v_4;
  short v;
  char result;
  result = (char)p[2][0];
  v_9 = (unsigned long long)(- (-(char)43));
  v_4 = (char)(! (18446744073709551517ULL % (p_7 + 783ULL)) * 147ULL & (unsigned long long)(
               ~ ((int)((signed char)-729.101632006) / ((int)p_11 + 451)) % (
               (int)result + 923)));
  v = (short)(p_7 ^ ~ v_9);
  result = (char)(- ((float)((int)(- v) - 51429 / ((int)v_4 + 782)) + - p[3][0]));
  return result;
}


