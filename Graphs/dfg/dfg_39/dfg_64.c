#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198925228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned char p_5[2])
{
  char v_7;
  long long v;
  unsigned int result;
  v_7 = (char)-89;
  v = 19251658LL;
  result = (unsigned int)p;
  result = (unsigned int)((long long)result % (v % (long long)((result - result) + 932U) + 703LL) + 
                          (long long)((210 + p) / (p % ((int)p_5[1] + 731) + 778)) / (
                          (long long)((int)p_5[0] % (p + 346)) % (v % (long long)(
                                                                  (int)v_7 + 552) + 220LL) + 321LL));
  return result;
}


