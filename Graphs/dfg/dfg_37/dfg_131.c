#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93695210
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, short p_11, unsigned long long p_13)
{
  short v_9;
  long v_7;
  unsigned char v_4;
  short v;
  long result;
  v_7 = 889515634L;
  result = (long)p_13;
  v_9 = (short)220;
  v_4 = (unsigned char)((((unsigned long long)((long)p + v_7) - 18446744073651727994ULL / (unsigned long long)(
                                                                (int)v_9 + 718)) % (unsigned long long)(
                         8029LL % (long long)(- result + 537L) + 529LL)) / (
                        ~ ((unsigned long long)p_11 - p_13) / 135ULL + 611ULL));
  v = (short)(! (~ (15390ULL % (unsigned long long)((int)v_4 + 360))) % 18446744073709546348ULL);
  result = (long)(((unsigned long)(! v) * (834975731UL & (unsigned long)v)) / 327867639UL - 28027UL);
  return result;
}


