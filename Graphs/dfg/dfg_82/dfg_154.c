#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265803585
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p)
{
  unsigned long v_6;
  unsigned short v_4;
  signed char v;
  float result;
  v_6 = (unsigned long)p;
  v_4 = (unsigned short)4181;
  result = (float)(! p);
  v = (signed char)((unsigned long)(! ((int)((unsigned short)result) * (int)v_4) % 4695) / (
                    v_6 + 294UL));
  v = v;
  result = (float)v;
  return result;
}


