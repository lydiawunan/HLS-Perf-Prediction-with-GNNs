//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 318160245
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p)
{
  signed char v_12;
  long v_10;
  unsigned int v_8;
  char v_6;
  unsigned long long v_4;
  unsigned long v;
  unsigned short result;
  v_12 = (signed char)101;
  v_10 = (long)p;
  v_8 = (unsigned int)p;
  result = (unsigned short)p;
  v_6 = (char)(v_10 - ! ((long)((int)v_12 / (p + 712)) / (v_10 * v_10 + 646L)));
  v = 0UL;
  v_4 = 18446744073369434150ULL;
  result = (unsigned short)(- ((unsigned long long)(v & ! v) - (904533724ULL % (
                                                                v_4 + 185ULL) | (unsigned long long)(~ result))));
  return result;
}


