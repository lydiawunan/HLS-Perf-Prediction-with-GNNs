#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 397459804
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p[5][2][4], unsigned int p_9, long long p_13)
{
  signed char v_11;
  unsigned int v_7;
  long v_4;
  float v;
  unsigned long long result;
  v_11 = (signed char)-1;
  v_4 = (long)p[1][0][0];
  v_7 = (unsigned int)(! (! (57LL & p_13)));
  v = (float)((1 / (p_9 + 1012U)) / (unsigned int)((int)(~ v_11) + 984));
  result = (unsigned long long)((double)((float)(~ (-6224L * (long)v)) + (
                                         (float)(v_4 * (long)p[0][1][1]) + 
                                         (float)v_7 * p[4][0][2])) + 155.575530422);
  result = result;
  return result;
}


