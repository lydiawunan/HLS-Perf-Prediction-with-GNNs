#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 223877963
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[4][3][5], short p_5, long p_7,
                       float p_9, signed char p_17)
{
  int v_15;
  float v_13;
  double v_11;
  char v;
  unsigned long long result;
  v_15 = (int)p[3][1][2];
  v_13 = (float)p_17;
  v_11 = (double)p_9;
  if (~ ((long)(v_11 - (double)v_13) / -42274L) <= (long)(~ (v_15 % 30538 - (int)p_17))) 
    v = (char)(~ 4294910270UL);
  else v = (char)(~ (unsigned char)88);
  result = (unsigned long long)((float)((unsigned long long)(- p[1][1][1]) | 
                                        (unsigned long long)v / 26715820ULL) + (
                                (float)p_5 - ((float)p_7 + p_9)));
  return result;
}


