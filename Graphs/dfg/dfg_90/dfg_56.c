#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 70140022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_9)
{
  unsigned short v_7;
  unsigned long v_5;
  double v;
  unsigned int result;
  v_7 = (unsigned short)51732;
  v_5 = (unsigned long)(~ p_9);
  v = (double)(- (-56486U));
  result = (unsigned int)(- (((unsigned long)(! p) + ((unsigned long)v >> (
                                                      v_5 & 31UL))) + (unsigned long)v_7));
  return result;
}


