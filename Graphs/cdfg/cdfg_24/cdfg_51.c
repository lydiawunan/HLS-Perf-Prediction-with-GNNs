#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 14416867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p)
{
  signed char v_6;
  long v_4;
  short v;
  unsigned int result;
  v_6 = (signed char)68;
  v_4 = (long)p;
  v = (short)-2712;
  result = (unsigned int)((unsigned long)(- ((long)v - v_4)) + ((unsigned long)v_6 - ! p));
  return result;
}


