#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 464236926
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p)
{
  unsigned short v;
  signed char result;
  result = (signed char)(- (! (char)-3));
  v = (unsigned short)((long)(- (~ (~ result))) - -4456L);
  result = (signed char)(! ((unsigned long long)((unsigned long)v & 809357512UL) | 1114121624ULL) * (unsigned long long)p);
  result = (signed char)(((unsigned long)p - ! (260699529UL % ((unsigned long)1.0611022576e+38 + 230UL))) + (
                         (unsigned long)(23835 - (int)((unsigned short)-808.865824864)) | (
                         ((unsigned long)-407.516906738f + 51548UL) >> (
                         (int)result % ((int)p + 910) & 31))));
  return result;
}


