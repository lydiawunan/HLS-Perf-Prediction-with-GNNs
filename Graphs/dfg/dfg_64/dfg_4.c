#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 413969698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p[2][5][2], unsigned char p_4, unsigned int p_6,
                  char p_9, unsigned char p_11[3][4])
{
  long v_17;
  double v_15;
  float v_13;
  long v;
  unsigned char result;
  v_17 = (long)p_9;
  v_15 = 620.290995869;
  v_13 = (float)(~ ((18446744073400672778ULL >> (-147814607LL * (long long)p_11[1][1] & 63LL)) - (unsigned long long)v_17));
  v = (long)(((double)((int)p_9 % ((int)p_11[1][0] / ((int)p_9 + 445) + 672)) - (
              (double)v_13 + - v_15)) / ((double)((unsigned int)(! p_9) / (
                                                  p_6 + 17U)) + 496.));
  result = (unsigned char)(~ (((unsigned long)((unsigned int)p_4 % (p_6 + 709U)) + (unsigned long)v) + 141UL));
  result = (unsigned char)(~ ((int)(- (- p[0][4][0])) + (int)(~ result)));
  return result;
}


