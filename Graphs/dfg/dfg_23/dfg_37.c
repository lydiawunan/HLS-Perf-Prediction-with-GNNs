#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1031569576
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[1][1], unsigned short p_11)
{
  signed char v_9;
  long v_7;
  long long v_4;
  short v;
  long long result;
  v_9 = (signed char)p[0][0];
  v = (short)p_11;
  v_4 = (long long)p_11;
  v_9 = (signed char)(29065ULL - (unsigned long long)v_9 / 169ULL);
  v_7 = 157L;
  result = -8263LL % (((long long)((int)((short)-6942344014.94) << ((int)v & 15)) - v_4) + 13LL) & (long long)(
           (long)p[0][0] / (v_7 + 632L) - (long)v_9);
  return result;
}


