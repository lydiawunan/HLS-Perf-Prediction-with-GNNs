#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331433615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p)
{
  signed char v_11;
  short v_9;
  unsigned long long v_7;
  char v_5;
  unsigned long v;
  unsigned short result;
  v_11 = (signed char)p;
  v_7 = 55253ULL;
  v_5 = (char)p;
  v_9 = (short)(~ (! p));
  result = (unsigned short)((unsigned long long)v_5 | (v_7 / (unsigned long long)(
                                                       (int)v_9 + 477) << (
                                                       ((int)(! v_11) - 1057030178) & 63)));
  v = (unsigned long)p;
  result = (unsigned short)((958184864LL % ((long long)-4.24819586074e+38 + 529LL)) % (long long)(
                            ~ ((unsigned long)p % (v + 613UL) - (v - (unsigned long)result)) + 591UL));
  return result;
}


