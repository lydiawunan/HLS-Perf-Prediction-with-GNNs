#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 146261767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[3][5], unsigned short p_9)
{
  unsigned short v_6;
  long v_4;
  short v;
  int result;
  v = (short)31995;
  result = 564910520;
  v = (short)(((int)p_9 - (int)v) / (~ result + 529));
  v_6 = (unsigned short)69;
  v_4 = (long)((unsigned long long)(- ((int)v % 133)));
  result = (int)((unsigned long long)((long)(result + 13010) % ((long)v / (
                                                                v_4 % (long)(
                                                                (int)v_6 + 599) + 212L) + 218L)) & - (
                 14806ULL * p[0][1] << 56UL));
  return result;
}


