#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 780041432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p)
{
  unsigned int v_15;
  unsigned short v_13;
  unsigned int v_11;
  int v_9;
  unsigned int v_6;
  short v_4;
  long v;
  unsigned long long result;
  v_13 = (unsigned short)61776;
  v_11 = (unsigned int)p;
  v_9 = (int)p;
  v_6 = (unsigned int)p;
  v_4 = (short)2284;
  v = -985369439L;
  result = 18446744072970734610ULL;
  while (((double)(~ v_4) + ((double)v_6 + p)) + (double)(((unsigned long)v_9 - 3532603837UL) - (
                                                          (unsigned long)v + 58209UL)) == 0.) {
    v_6 = (int)v_13 - 82;
    v_15 = (unsigned int)((result % 71ULL - 105ULL) * (unsigned long long)(
                          p / (p + 159.)));
    v_4 = (short)p;
    v = (long)(v_6 - (v_15 % 36834U + (unsigned int)p));
  }
  while_0_break: ;
  result = (unsigned long long)(v ^ (long)v_4);
  return result;
}


