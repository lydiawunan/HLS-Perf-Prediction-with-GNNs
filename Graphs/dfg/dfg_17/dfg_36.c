#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30359879
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_7, unsigned long p_9, int p_11)
{
  char v_15;
  signed char v_13;
  unsigned int v_4;
  short v;
  unsigned int result;
  v_15 = (char)-53;
  v = p;
  result = (unsigned int)p_7;
  v = v;
  v_13 = (signed char)v_15;
  v_4 = (unsigned int)(1 >> ((int)v_13 & 31));
  result = (unsigned int)((! ((unsigned long)result + 629536881UL) + (unsigned long)(
                           (float)(result << ((int)v & 31)) / (296.769500732f * (float)v_4 + 762.f))) + 
                          ((unsigned long)((int)p / (p_7 + 419)) * p_9) % (unsigned long)(
                          - (p_11 / ((int)v + 552)) + 902));
  return result;
}


