#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 553443417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, signed char p_9, signed char p_11,
                   unsigned long p_13)
{
  int v_7;
  unsigned short v_4;
  short v;
  unsigned short result;
  v_7 = (int)p_13;
  result = (unsigned short)p_9;
  v_4 = (unsigned short)p_13;
  v = (short)p;
  v_4 = (unsigned short)((int)((-233177638. + (3.71211897169e+36 + (double)p_9)) * (double)(
                               (int)(- p_11) % ((int)p_9 / ((int)v_4 + 598) + 992))) & (
                         (int)result - (int)(~ result)));
  result = (unsigned short)(((unsigned int)(! ((int)v * (int)v_4)) | p) * (unsigned int)v_7);
  return result;
}


