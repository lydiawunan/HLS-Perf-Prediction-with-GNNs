#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 666482780
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p)
{
  int v_4;
  float v;
  unsigned short result;
  v_4 = 22927208;
  v = (float)(! p);
  result = (unsigned short)(v - (float)(- ((unsigned int)(26 / (v_4 + 916)) - 
                                           (unsigned int)p % 3858646290U)));
  return result;
}


