#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 540952288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long long p_5, char p_13)
{
  unsigned long long v_15;
  short v_11;
  long long v_9;
  char v_7;
  long v;
  long long result;
  v_15 = 16015ULL;
  v_7 = (char)p_5;
  v_9 = (long long)(191045838ULL * ! (! v_15 * (unsigned long long)v_7));
  v_11 = (short)p_13;
  v = (long)(- (18446744072793926151ULL + ~ ((unsigned long long)v_11 * p_5)));
  result = ~ ((long long)((unsigned long)v / (p + 960UL) << ((3558084608ULL ^ p_5) & 31ULL)) ^ (
              (long long)v_7 + 830017506LL / (v_9 + 136LL)));
  return result;
}


