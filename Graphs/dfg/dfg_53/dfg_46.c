#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427713817
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned char p_4[3][5], short p_15)
{
  char v_19;
  long long v_17;
  int v_13;
  unsigned int v_11;
  unsigned int v_9;
  long v_7;
  unsigned int v;
  unsigned long long result;
  v_19 = (char)p_15;
  v_13 = -55008;
  v_11 = (unsigned int)p_15;
  v_9 = (unsigned int)p_15;
  v_7 = (long)(4294967295UL % (unsigned long)((~ (v_11 * (unsigned int)p_15) + (unsigned int)v_19) + 521U));
  v_17 = (long long)v_11;
  v = (unsigned int)((long long)(v_9 * ((v_11 - (unsigned int)p_4[2][1]) * (unsigned int)(! v_13))) - 
                     ((long long)p_15 ^ 70109510LL * v_17) % (long long)(
                     0 % (((int)p ^ (int)p_4[2][4]) + 25) + 99));
  result = (unsigned long long)(323080940UL + (unsigned long)(- ((int)p ^ (int)p_4[1][4])) / (
                                              (unsigned long)((unsigned int)p_4[1][3] * v) % (
                                              ((unsigned long)v_7 + (unsigned long)v_9) + 430UL) + 704UL));
  return result;
}


