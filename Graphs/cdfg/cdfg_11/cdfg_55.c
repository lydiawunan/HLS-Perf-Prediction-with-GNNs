#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 976289436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p)
{
  signed char v_11;
  unsigned int v_8;
  double v_6;
  float v_4;
  double v;
  float result;
  v_11 = (signed char)50;
  v_8 = 48518U;
  v_6 = 2.28471786554e+38;
  v_4 = (float)p;
  v = (double)((unsigned long)(((double)v_4 - v_6) - (double)(~ v_8)) - 
               (p / (unsigned long)((int)v_11 + 260)) % (p * 4294967264UL + 821UL));
  result = (float)v;
  return result;
}


