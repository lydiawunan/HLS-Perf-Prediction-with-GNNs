#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 414866525
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned long long p_13, unsigned short p_15,
         short p_17)
{
  int v_10;
  short v_8;
  long long v_6;
  unsigned long long v_4;
  long long v;
  char result;
  v_10 = -763749501;
  v_6 = (long long)p_17;
  v_8 = (short)((unsigned int)(- ((int)p_15 + (int)p_15)) & 316684563U % (unsigned int)(
                                                            (int)p_17 + 974));
  if (~ (! (p & (unsigned long long)v_8)) != 0ULL) {
    v_4 = (unsigned long long)(((long long)v_8 / (v_6 + 66LL) & (long long)(
                                -2658L - (long)v_10)) - -117LL);
    v = (long long)(v_4 + (unsigned long long)v_6);
    result = (char)(- (~ (196588813LL / (v + 874LL))));
  }
  else result = (char)(~ (p + p_13) / 23ULL);
  return result;
}


