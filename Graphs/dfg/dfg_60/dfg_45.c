#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930910655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, double p_9, double p_13)
{
  unsigned long v_11;
  long long v_6;
  short v_4;
  int v;
  long long result;
  v_11 = 417216920UL;
  v_4 = (short)p;
  result = (long long)p_13;
  v_4 = (short)(-914877613 * (int)((p_9 / (p_9 + 866.) - p_9 / ((double)v_4 + 810.)) / (
                                   ((double)(4294967293UL + v_11) - p_13 * 1.84467440729e+19) + 514.)));
  v_6 = - ((long long)(- p) - result);
  v = (int)((long long)v_4 | v_6);
  result = (long long)(! (~ v));
  return result;
}


