#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 740015093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, long long p_5[4], int p_7, float p_9)
{
  unsigned short v_19;
  unsigned int v_17;
  unsigned int v_15;
  short v_13;
  double v_11;
  unsigned short v;
  unsigned long result;
  v_19 = (unsigned short)p_5[2];
  v_17 = 4294936730U;
  v_15 = 992505906U;
  v_13 = (short)p_5[3];
  v_11 = (double)((float)(((unsigned int)v_13 - ((unsigned int)v_13 - v_15)) % (
                          (v_17 + (unsigned int)(! v_19)) + 560U)) / (
                  - (- (- p_9)) + 232.f));
  v = (unsigned short)(- ((double)(~ p_7 * (int)(- p_9)) / (- (v_11 + (double)v_13) + 165.)));
  result = (unsigned long)((long long)p + - (~ (- p_5[2])));
  result = result * (unsigned long)(~ v) + 52UL;
  return result;
}


