#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 532757273
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p)
{
  long v_10;
  char v_8;
  signed char v_6;
  unsigned long v_4;
  unsigned long v;
  short result;
  v_8 = (char)-16;
  v = (unsigned long)p;
  v_4 = (unsigned long)p;
  v_6 = (signed char)(120ULL - (- (420025520ULL / (unsigned long long)(
                                   p + 1020)) - (unsigned long long)v));
  v_10 = (long)v_6;
  result = (short)(- (! v % (v_4 + 508UL)) | (unsigned long)((long)(! v_6) * ! (
                                                             (long)v_8 - v_10)));
  return result;
}


