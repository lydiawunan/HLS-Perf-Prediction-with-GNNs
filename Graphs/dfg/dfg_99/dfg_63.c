#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042338109
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p[3][5][4])
{
  signed char v_4;
  long long v;
  unsigned long long result;
  v_4 = (signed char)9;
  v = (long long)(- (((int)(- v_4) ^ (int)((signed char)-3.34085157796e+37f)) % (
                     p[0][3][1] + 810)));
  result = (unsigned long long)v;
  return result;
}


