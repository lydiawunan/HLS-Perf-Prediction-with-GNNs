#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557178909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p)
{
  unsigned long long v_15;
  unsigned long long v_13;
  long v_11;
  unsigned long long v_9;
  unsigned long long v_7;
  long v_4;
  unsigned int v;
  unsigned long long result;
  v_15 = 18446744073709493553ULL;
  v_13 = 18446744073709488917ULL;
  v_11 = (long)p;
  v_9 = 292102856ULL;
  v_4 = 620430452L;
  v = (unsigned int)p;
  v_11 = (long)((((v_9 + (unsigned long long)p) ^ (unsigned long long)v_11 * v_13) + 
                 (unsigned long long)p * v_15) / 835ULL);
  v_7 = (unsigned long long)v_11;
  v = (unsigned int)(((unsigned long long)(- (30463 << 9L)) + ~ (v_7 + (unsigned long long)p)) % (
                     (~ v_9 * (unsigned long long)(- v)) * (unsigned long long)(
                     (unsigned long)p % 3534320784UL + (unsigned long)p) + 943ULL));
  result = ~ ((unsigned long long)v * ((unsigned long long)(v_4 ^ 115L) + (
                                       (unsigned long long)p - v_7)));
  return result;
}


