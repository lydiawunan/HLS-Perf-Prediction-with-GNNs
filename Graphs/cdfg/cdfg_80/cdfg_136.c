#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205695513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[1][1][1], unsigned long long p_4, unsigned int p_6,
           int p_8[1][3][1], unsigned long p_11)
{
  signed char v;
  double result;
  result = -2891445315.18;
  v = (signed char)p_6;
  while ((double)(0UL - (unsigned long)(((int)-4534050590.83 - 723937501) / (
                                        (int)(p[0][0][0] - (double)p_4) + 1017))) < - (
         (result - (double)p_6) + (double)(! p_8[0][2][0]))) {
    v = (int)v % -38;
    result = (double)(~ ((unsigned long long)p_11 - p_4));
  }
  while_0_break: ;
  return result;
}


