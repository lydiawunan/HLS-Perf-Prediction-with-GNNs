#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1051715656
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, int p_9)
{
  char v_7;
  double v_5;
  long v;
  unsigned int result;
  v_7 = (char)123;
  v = (long)p_9;
  result = (unsigned int)(((unsigned long)(v & 151L) / (40UL / ((p - p) + 417UL) + 8UL)) * (unsigned long)(- (
                          (p_9 - 39886) * (int)2596941312.f)));
  v_5 = (double)(50947L % (155L % (~ (v / (v + 147L)) + 556L) + 690L));
  v = (long)(~ (! (- ((int)((char)v_5) / ((int)v_7 + 819)))));
  result = (unsigned int)((((unsigned long)v | (unsigned long)result) % (
                           p + 48UL)) * 38469UL - 4226946704UL);
  return result;
}


