#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783799312
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, char p_4[5][2][3], short p_6, long long p_11)
{
  unsigned int v_9;
  signed char v;
  char result;
  v_9 = 48893U;
  v = (signed char)(p_11 * (long long)(- p_4[3][1][2]));
  result = (char)((! p / 552758571UL | (unsigned long)((int)p_4[0][0][0] * (int)p_6 | 
                                                       (int)p_4[3][0][0] * (int)v)) | (unsigned long)(
                  (unsigned int)(~ (31203 / ((int)p_4[0][1][0] + 408))) + ~ (~ v_9)));
  return result;
}


