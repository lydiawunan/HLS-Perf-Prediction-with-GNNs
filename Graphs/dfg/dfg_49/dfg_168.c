#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003058471
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned long long p_9, char p_13,
                       unsigned int p_19[3][3][2])
{
  double v_17;
  int v_15;
  signed char v_11;
  signed char v_6;
  int v_4;
  double v;
  unsigned long long result;
  v_17 = (double)p_9;
  v_6 = (signed char)p_13;
  v_4 = -34057;
  v = 1.91029152926e+38;
  v_15 = (int)((unsigned int)v_17 / ((! (4217104790U / (unsigned int)(
                                         (int)p + 625)) + - (! p_19[1][1][1])) + 610U));
  result = (unsigned long long)p_13;
  v_11 = (signed char)(- (p_9 / ((unsigned long long)(v / ((double)v_6 + 586.)) + 89ULL)) & (unsigned long long)v_15);
  result = ((unsigned long long)(((int)((char)v) + -93) % ((v_4 - (int)v_6) + 620)) + (
            (unsigned long long)p - result * p_9)) * (unsigned long long)(
           ~ (40110L + (long)v_6) / 1002L);
  return result;
}


