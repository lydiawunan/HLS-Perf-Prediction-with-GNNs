#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1052222208
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, unsigned int p_9)
{
  unsigned int v_13;
  long v_11;
  long v_7;
  signed char v_5;
  short v;
  float result;
  v_13 = p_9;
  v_11 = (long)p_9;
  v_5 = (signed char)p;
  v_5 = (signed char)(4294967238UL * ((unsigned long)((long)4820965888.f * v_11) / (unsigned long)(
                                      (unsigned int)v_5 / (v_13 + 968U) + 995U)) - (unsigned long)-9227735040.f);
  v_7 = (long)(855ULL + - (22530ULL << ((4294930247U + p_9) & 63U)));
  v = (short)v_7;
  result = (float)((! (~ p) * (unsigned int)v) / (unsigned int)((int)v_5 + 513));
  return result;
}


