#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238458243
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned short p_5[5][2][1])
{
  long long v;
  long result;
  v = (long long)p;
  result = (long)p;
  if (! (- v % -90LL) != (long long)p_5[1][1][0]) {
    v = (long long)(~ ((unsigned long)(result / 37L) % ((372007752UL - (unsigned long)result) + 93UL)));
    result = (long)(~ 2879228811ULL);
    v = (long long)((unsigned long)(- result) * (4294925929UL - p)) % (
        - (v & 777887006LL) + 131LL);
  }
  else v = 174322274LL;
  result = (long)((31546LL * ~ v) / -30869LL);
  return result;
}


