#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021623443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, float p_13, signed char p_15[3], unsigned int p_17)
{
  unsigned char v_19;
  int v_11;
  unsigned short v_9;
  int v_7;
  unsigned long long v_5;
  short v;
  long long result;
  v_19 = (unsigned char)p_15[0];
  v_9 = (unsigned short)61782;
  v_7 = (int)p_15[2];
  v_5 = 18446744073370394379ULL;
  v = (short)p_15[1];
  if (0 > (int)v * (int)v_19) {
    result = 179LL;
    v = (short)(! -30176LL);
    v = (short)(! (v_7 * (int)v_9) - (int)v);
  }
  else {
    result = (long long)(((int)p_15[1] * (108 + (int)((char)592.311480444))) / (
                         (int)p_15[0] + 389));
    v_11 = (int)(- ((float)(13262UL - (unsigned long)p) + p_13));
    v_5 = (unsigned long long)v_11;
  }
  result = (long long)((unsigned long long)result * ((unsigned long long)v / (
                                                     (unsigned long long)p % (
                                                     v_5 + 837ULL) + 735ULL)));
  return result;
}


