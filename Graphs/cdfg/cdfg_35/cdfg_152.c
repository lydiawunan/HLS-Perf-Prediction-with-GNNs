#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510480352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p)
{
  unsigned short v_12;
  unsigned long long v_10;
  double v_8;
  long long v_6;
  unsigned long long v_4;
  unsigned int v;
  char result;
  v_12 = (unsigned short)52015;
  v_10 = p;
  v_8 = -1.862261143e+38;
  v_6 = 39047LL;
  v_4 = 18446744072672508671ULL;
  result = (char)-39;
  v = (unsigned int)(p / (p + 839ULL));
  while ((unsigned long long)(~ v) == - (v_4 + 18446744073709528826ULL) % (unsigned long long)(
                                      ! (95LL % (v_6 + 636LL)) + 970LL)) {
    v_8 = v_10 * (unsigned long long)(v_8 - 439941574.);
    result = (char)(- (18446744073261874387ULL + (unsigned long long)v_12) % (
                    (p % 18446744073526267109ULL ^ - p) + 224ULL));
    v = (unsigned int)(- v_4);
    v_4 = 3876571911ULL;
  }
  while_0_break: ;
  return result;
}


