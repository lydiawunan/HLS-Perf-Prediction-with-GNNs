#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025007967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, float p_5, unsigned short p_13)
{
  long v_11;
  unsigned int v_9;
  unsigned int v_7;
  unsigned short v;
  unsigned short result;
  v_11 = 278707978L;
  v_9 = 4294910587U;
  v_7 = (unsigned int)p;
  v = (unsigned short)10525;
  result = (unsigned short)p_5;
  while ((unsigned int)(((4.50549124661e+37 * (double)v) * -2518975.) / (
                        (double)((int)(-2.85468649591e+37 - (double)p) / -14014) + 594.)) >= 
         (unsigned int)((-46433 % ((int)p_5 + 556)) * (int)2.23880980078e+38) / (
         v_7 + 732U)) {
    v = (unsigned short)(! ((unsigned long long)p_13 % ((unsigned long long)v_9 * 60467ULL + 495ULL)));
    result = (unsigned short)p;
    v_7 = (unsigned int)v_11;
  }
  while_0_break: ;
  result = result;
  return result;
}


