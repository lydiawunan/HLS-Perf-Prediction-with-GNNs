#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 401826514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned long p_4, signed char p_13[4][2],
              unsigned int p_15[5][2][2])
{
  unsigned short v_11;
  unsigned long long v_9;
  short v_7;
  unsigned short v;
  long long result;
  v_9 = (unsigned long long)p_4;
  v = (unsigned short)p_15[3][1][1];
  v_7 = (short)(! (v_9 / 18446744073709551611ULL + (unsigned long long)v));
  v_11 = (unsigned short)(! (~ ((unsigned long long)p_15[2][0][0])));
  result = (long long)(((unsigned long long)(p_4 * (unsigned long)(~ v_7)) & - (
                        v_9 + (unsigned long long)v_11)) % (unsigned long long)(
                       (int)p_13[0][1] + 823));
  result = (long long)(! ((unsigned long)p / (p_4 + 46UL)) % (unsigned long)(
                       (int)v + 258)) | ~ (! (! result));
  return result;
}


