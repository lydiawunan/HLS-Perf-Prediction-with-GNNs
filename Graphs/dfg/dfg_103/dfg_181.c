#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 90650184
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned short p_5, unsigned long long p_9)
{
  long long v_15;
  signed char v_13;
  short v_11;
  long long v_7;
  char v;
  short result;
  v_15 = -1137LL;
  v_13 = (signed char)p_5;
  v_11 = (short)23907;
  v_7 = (long long)((int)(- v_11) % ((int)v_13 + 181)) / (- ((long long)p_5 % (
                                                             (2322701914LL & v_15) + 143LL)) + 843LL);
  v = (char)((unsigned long long)p ^ ((unsigned long long)((long long)p_5 ^ v_7) + ~ p_9) * (unsigned long long)(! (
                                     122 - (int)p_5)));
  result = (short)(- v);
  return result;
}


