#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164880014
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p)
{
  unsigned short v_8;
  unsigned int v_6;
  signed char v_4;
  unsigned long long v;
  unsigned int result;
  v_6 = p;
  v = (unsigned long long)p;
  result = p;
  v_8 = (unsigned short)(- p);
  v_4 = (signed char)(! (p % (p + 354U)));
  result = (unsigned int)((unsigned long)v_4 * (4294950381UL / (unsigned long)(
                                                (v_6 << (result / (unsigned int)(
                                                         (int)v_8 + 709) & 31U)) + 1004U)));
  result = (unsigned int)(v | (unsigned long long)(! result));
  return result;
}


