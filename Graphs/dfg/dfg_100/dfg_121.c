#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198657215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p)
{
  signed char v_10;
  unsigned long v_8;
  long long v_6;
  short v_4;
  signed char v;
  long result;
  v_10 = (signed char)117;
  v_8 = (unsigned long)p;
  v_6 = (long long)((unsigned long)(17007L / (! ((long)v_10 * p) + 202L)) % 916835733UL);
  v_4 = (short)-5417;
  v = (signed char)(((long long)v_4 * (v_6 + 149LL)) * (long long)(- (- (- v_8))));
  result = (long)v;
  return result;
}


