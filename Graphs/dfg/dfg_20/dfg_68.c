#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749063901
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned long long p_5,
                       unsigned char p_7, signed char p_11)
{
  int v_15;
  unsigned long long v_13;
  long v_9;
  long long v;
  unsigned long long result;
  v_15 = 387618727;
  v_13 = (unsigned long long)p_7;
  v_9 = (long)(8053 & v_15);
  v_9 = (long)(! ((unsigned long long)p_11 % (((unsigned long long)v_9 + (
                                               v_13 - (unsigned long long)-3.21320423312e+38f)) + 137ULL)));
  v = (long long)(~ (((unsigned long long)(4341 - (int)((unsigned short)1451728977.31)) + 
                      (unsigned long long)p * p_5) + 27357ULL / (unsigned long long)(
                                                     (long)p_7 / (v_9 + 457L) + 577L)));
  result = (unsigned long long)(~ v);
  return result;
}


