#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231309379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p)
{
  signed char v_11;
  float v_9;
  long v_7;
  signed char v_4;
  short v;
  long result;
  v_11 = (signed char)115;
  v_7 = 1047578434L;
  result = (long)p;
  v_9 = (float)v_11;
  v = (short)(~ ((unsigned long long)(- (- v_9)) % (~ p + 336ULL)));
  v_4 = (signed char)(((unsigned long long)(! ((long)v - v_7)) | ! p) >> (
                      ~ (~ (p & p)) & 63ULL));
  result = (long)(- ((unsigned long long)(- ((int)v % ((int)v_4 + 625))) * (
                     (unsigned long long)(62189L / (result + 943L)) & 
                     5866ULL % (p + 552ULL))));
  return result;
}


