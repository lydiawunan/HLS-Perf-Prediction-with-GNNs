#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809028823
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[3][2][1], char p_4)
{
  double result;
  result = (double)p_4;
  result = (double)(30641 + (int)p[1][1][0] / -105) - ((double)(-23 | (int)((char)1497366144.f)) - 
                                                       result * (double)p_4);
  result = - (- result);
  return result;
}


