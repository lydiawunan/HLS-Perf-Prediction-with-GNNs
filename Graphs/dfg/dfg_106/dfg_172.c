#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 963935572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p)
{
  long long v_4;
  unsigned char v;
  unsigned long long result;
  v_4 = (long long)p;
  result = (unsigned long long)p;
  v = (unsigned char)result;
  result = ! ((unsigned long long)(- v) % ((result + (unsigned long long)(
                                            v_4 % -38736LL)) + 670ULL));
  result = ~ (- result | 58858ULL);
  return result;
}


