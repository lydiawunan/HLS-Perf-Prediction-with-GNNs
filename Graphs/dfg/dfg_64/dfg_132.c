#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 778527305
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, char p_11)
{
  short v_9;
  unsigned int v_7;
  long long v_5;
  unsigned int v;
  long result;
  v_9 = (short)1437;
  v_7 = (unsigned int)(! (! (! ((int)v_9 + (int)p_11))));
  v_5 = (long long)(! v_7);
  v = (unsigned int)v_5;
  result = (long)((unsigned long)((float)v + -1.13013109675e+38f) % (
                  ((unsigned long)(32U | v % (unsigned int)((int)p + 468)) - 1) + 122UL));
  return result;
}


