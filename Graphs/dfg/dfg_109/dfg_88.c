#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 337367095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long p_9, unsigned long long p_11[5],
                 unsigned short p_15[5])
{
  float v_17;
  char v_13;
  int v_7;
  unsigned short v_5;
  char v;
  unsigned int result;
  v_17 = -995.542236328f;
  v_7 = (int)p_11[2];
  v_5 = (unsigned short)p;
  result = (unsigned int)p_15[2];
  v_13 = (char)(- result % 4294964994U);
  v_5 = (unsigned short)(- ((float)v_5 - -1.74860190291e+38f));
  v = (char)(- ((float)(0 / (unsigned int)((522831495 - (int)p_15[3]) + 27)) + - v_17));
  result = (unsigned int)((unsigned long long)(! ((long long)(511765604UL / (unsigned long)(
                                                              (int)p + 694)) & (
                                                  990342941LL - (long long)v))) / (
                          ((unsigned long long)((long)((int)v_5 / (v_7 + 225)) | ! p_9) + (
                           p_11[4] / (unsigned long long)((int)v_13 + 303) - (unsigned long long)(- p_15[1]))) + 470ULL));
  return result;
}


