#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 371934809
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p)
{
  char v_9;
  unsigned long v_7;
  char v_5;
  unsigned short v;
  unsigned long long result;
  v_7 = 17887UL;
  v_5 = (char)p;
  v = (unsigned short)p;
  result = 18446744073709533060ULL;
  v_9 = (char)((int)v_5 << 7U);
  v_5 = (char)(((29ULL - ! p) & (unsigned long long)v_7) % ((p / (unsigned long long)(
                                                             ((int)v_5 + (int)v_9) + 606) >> (
                                                             ! (18446744073709513529ULL - result) & 63ULL)) + 837ULL));
  v = (unsigned short)((0 - (unsigned long)(- v)) % 8766UL);
  result = ~ ((unsigned long long)((int)(~ v) + 125) % ((~ p & (unsigned long long)v_5) + 759ULL));
  return result;
}


