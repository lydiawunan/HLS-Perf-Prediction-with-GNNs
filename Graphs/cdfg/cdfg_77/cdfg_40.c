#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 740207095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, char p_5, signed char p_9[4][5])
{
  short v_15;
  signed char v_13;
  long long v_11;
  signed char v_7;
  unsigned long long v;
  unsigned char result;
  v_15 = (short)1577;
  v_13 = (signed char)p_5;
  v_11 = (long long)p_5;
  v_7 = p_9[0][3];
  result = (unsigned char)107;
  v_7 = (signed char)((float)v_13 * ((float)((int)v_7 % ((int)v_15 + 595)) * 1.10185376693e+38f));
  if (-36612LL == ~ (301953466LL - ~ v_11)) {
    v = (unsigned long long)result;
    v = (p + (unsigned long long)p_5) % (unsigned long long)((int)v_7 + 678) << (
        ! v & 63ULL);
    result = (unsigned char)v;
  }
  else result = (unsigned char)(~ ((long long)(7671853056.f + (float)p_9[3][2]) / -21824237475LL));
  return result;
}


