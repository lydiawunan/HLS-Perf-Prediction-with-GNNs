#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 291102433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  unsigned long v_6;
  unsigned long v_4;
  unsigned long v;
  double result;
  v_6 = 373892733UL;
  v = 792441428UL;
  v_4 = v;
  v = v_6;
  v = (4294929960UL + - v % (v * v_4 + 347UL)) - 4294967172UL;
  result = (double)v;
  return result;
}


