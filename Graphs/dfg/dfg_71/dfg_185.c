#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 503113135
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long long p_15)
{
  unsigned char v_13;
  char v_11;
  long v_9;
  double v_7;
  unsigned long v_5;
  unsigned long v;
  float result;
  v_13 = (unsigned char)p_15;
  v_9 = 904225464L;
  v_7 = (double)p_15;
  v_5 = 780512258UL;
  v = (unsigned long)p_15;
  v_13 = (unsigned char)(~ ((unsigned long long)((float)v_13 - 3.35899946678e+38f) * (
                            p_15 - 428808573ULL) - 96ULL));
  v_11 = (char)p_15;
  result = (float)((unsigned long long)(~ (v << ((int)p & 31)) / ((v_5 * v | (unsigned long)(- v_7)) + 413UL)) % (
                   ((unsigned long long)(v_9 >> ((unsigned long)v_9 * 4166364873UL & 31UL)) + 
                    (unsigned long long)((int)v_11 + (int)v_13) * (p_15 + 25433ULL)) + 637ULL));
  result = result;
  return result;
}


