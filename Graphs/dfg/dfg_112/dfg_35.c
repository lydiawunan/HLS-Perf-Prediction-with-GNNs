#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502595875
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p)
{
  double v_5;
  unsigned long v;
  double result;
  v_5 = (double)p;
  result = (double)((int)((short)v_5) - 21952);
  result = (double)(! (3783691435UL * (unsigned long)(240 - (int)((unsigned char)-3304037376.f))) * (unsigned long)(! (
                    (int)p + ((int)((unsigned char)result) + (int)p))));
  v = (unsigned long)p;
  result = (double)(~ ((unsigned long)(- (- result)) / (v + 482UL)));
  return result;
}


