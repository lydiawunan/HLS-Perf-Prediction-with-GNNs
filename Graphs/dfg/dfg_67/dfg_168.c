#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047935712
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p)
{
  double v_6;
  unsigned short v_4;
  unsigned long v;
  unsigned short result;
  v_6 = (double)(! p);
  v = (unsigned long)p;
  v_4 = (unsigned short)v_6;
  result = (unsigned short)(~ (v * (unsigned long)v_4));
  return result;
}


