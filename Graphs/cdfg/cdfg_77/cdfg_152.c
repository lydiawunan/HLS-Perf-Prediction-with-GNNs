#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071794167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p)
{
  short v;
  unsigned short result;
  v = (short)6584;
  result = (unsigned short)((unsigned int)(-905.948120117f + (float)(
                                           (int)v % -72)) * (0U / (- p + 502U)));
  result = (unsigned short)(((int)result + (int)((unsigned short)-8638111744.f)) / (
                            (int)result + 676));
  return result;
}


