#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 497353990
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p[2], unsigned short p_11)
{
  unsigned short v_8;
  double v_6;
  unsigned long v_4;
  double v;
  short result;
  v_4 = 25907UL;
  v_8 = (unsigned short)((double)p_11 + -4156753090.94);
  v_6 = - (- p[1]);
  v = (double)(~ (56378L - (long)v_8));
  result = (short)(- ((double)(((unsigned long)v - v_4) % 3906177807UL) + (
                      v_6 + -32695.)));
  return result;
}


