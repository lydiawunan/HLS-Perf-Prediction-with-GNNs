#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 166660265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p)
{
  unsigned int v_15;
  unsigned int v_12;
  int v_10;
  unsigned long long v_8;
  char v_6;
  unsigned int v_4;
  unsigned char v;
  unsigned long long result;
  v_15 = (unsigned int)p;
  v_12 = 32825U;
  v_10 = (int)p;
  v_8 = 9059ULL;
  v_4 = (unsigned int)p;
  v = (unsigned char)p;
  if (~ (! (p * p)) <= (unsigned long long)(55154UL % (unsigned long)(
                                            v_4 + 78U))) {
    v_6 = (char)((unsigned long long)v + (((unsigned long long)v_12 + p) + - p));
    v = (unsigned char)v_10;
    v_4 = (unsigned int)(~ (18446744073709535934ULL + ~ v_8));
  }
  else {
    v_12 = (unsigned int)p;
    v_6 = (char)(~ (~ v));
    v_8 = (unsigned long long)((unsigned long)v_15 + ((unsigned long)(~ v_12) & 444795693UL));
  }
  result = (unsigned long long)(((unsigned int)v & v_4) / (unsigned int)(
                                (int)(! v_6) + 610)) ^ v_8;
  return result;
}


