#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 645420338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, signed char p_5, unsigned long p_9, long p_11)
{
  unsigned char v_7;
  char v;
  unsigned short result;
  v = (char)p_11;
  v_7 = (unsigned char)(! (~ p_9));
  result = (unsigned short)((18446744073709551472ULL - ((unsigned long long)v - 18446744073709500541ULL)) * 54662ULL ^ (unsigned long long)(
                            ((-18LL + p) << (((int)p_5 + (int)v_7) & 63)) * - (~ p)));
  return result;
}


