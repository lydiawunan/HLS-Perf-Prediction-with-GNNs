#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 416446491
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned int p_4[3][3][4], long p_6,
         signed char p_8, char p_10[2][4][3])
{
  unsigned int v;
  long result;
  v = (unsigned int)p;
  if ((unsigned int)p_10[1][1][1] <= v) {
    result = p_6;
    result = (long)(~ ((long long)(82L % (result + 985L)) & ((long long)p_4[1][0][0] - 148309993LL)));
    result = result;
  }
  else result = ~ ((long)((int)p_8 * (int)p_10[0][0][0]) | ((long)p_8 + -1056757348L));
  result = (long)(- p + (unsigned long)result);
  return result;
}


