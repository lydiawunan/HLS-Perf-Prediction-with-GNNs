#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599580665
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[1][4], unsigned int p_5, double p_7,
           signed char p_11[3][1], unsigned long long p_13)
{
  char v_15;
  char v_9;
  unsigned short v;
  double result;
  v_15 = (char)p[0][0];
  v_9 = (char)-112;
  if ((unsigned long long)(! (0 % ((int)v_9 % ((int)p_11[2][0] + 599) + 984))) < 
      (18446744073709523542ULL * p_13 - (unsigned long long)(! v_15)) * p_13) 
    v = (unsigned short)(- (- (- p_7)));
  else v = (unsigned short)62952;
  if ((unsigned int)v == p_5) result = (double)p[0][2];
  else result = (double)(-2.02307404476e+18f * p[0][0]);
  return result;
}


