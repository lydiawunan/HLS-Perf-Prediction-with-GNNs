#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311677022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned int p_4, unsigned long long p_7[3])
{
  short v_9;
  unsigned long v;
  double result;
  v = 159UL;
  v_9 = (short)(p ^ (int)6679695872.f);
  v = (v + (unsigned long)(- p_4)) % (unsigned long)((int)v_9 + 632);
  result = - ((197.867964136 + (double)(p >> 12L)) - (double)((unsigned long long)(
                                                              (unsigned long)p_4 / (
                                                              v + 813UL)) + 
                                                              (unsigned long long)p / (
                                                              p_7[2] + 29ULL)));
  return result;
}


