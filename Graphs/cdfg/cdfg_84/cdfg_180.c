#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373926333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p)
{
  unsigned long long v_11;
  unsigned long v_9;
  unsigned long long v_7;
  signed char v_5;
  double v;
  long result;
  v_11 = 47393301ULL;
  v_7 = 18446744073709503324ULL;
  v_5 = (signed char)81;
  v = 2.45844162351e+38;
  result = p;
  v_9 = (unsigned long)((long)((double)(36340ULL / (v_11 + 461ULL)) + 7486705653.73) / (
                        (p ^ ! p) + 623L));
  while ((unsigned long long)((int)((signed char)(- v)) << ((int)(! v_5) & 7)) * ! (
         v_7 / 542ULL) < (unsigned long long)((long long)(~ result) % -342802567LL)) {
    v_9 = v_11 + (unsigned long long)(v_9 << 25ULL);
    v = v;
    v_11 = (unsigned long long)(- (767552666. * v));
    v_5 = (signed char)v;
  }
  while_0_break: ;
  return result;
}


