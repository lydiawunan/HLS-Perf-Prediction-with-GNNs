#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 492778198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p)
{
  unsigned long v_9;
  signed char v_6;
  short v_4;
  unsigned int v;
  long result;
  v_9 = (unsigned long)p;
  v_6 = (signed char)p;
  v_4 = (short)24384;
  v = 20629U;
  v = (unsigned int)((unsigned long)(v << (4294918987UL * (unsigned long)v_6 & 31UL)) % (
                     ((unsigned long)p + v_9 / 4294936881UL) + 230UL));
  result = (long)(- (v / (v / (unsigned int)((int)v_4 + 829) + 408U)));
  return result;
}


