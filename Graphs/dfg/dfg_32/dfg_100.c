#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347224468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, char p_9, unsigned long p_11)
{
  double v_7;
  char v_5;
  short v;
  unsigned int result;
  v_7 = 4739074439.09;
  v_5 = (char)p_11;
  v_5 = (char)((unsigned long)(~ ((int)v_7 * ((int)v_5 - (int)p_9))) ^ p_11);
  result = (unsigned int)v_5;
  v = (short)(~ (~ result >> ((int)p & 31)));
  result = ~ ((unsigned int)-839.742730919 % 666185951U) + (unsigned int)(
           (int)v + 140);
  return result;
}


