#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 612503357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p)
{
  unsigned long v_8;
  unsigned long long v_6;
  unsigned short v_4;
  unsigned int v;
  signed char result;
  v_8 = 4294963561UL;
  v_6 = (unsigned long long)p;
  v = 33261U;
  v_4 = (unsigned short)(- (~ ((unsigned long long)v * v_6) / (unsigned long long)(
                            (13521UL * v_8) % ((unsigned long)v / (p + 597UL) + 738UL) + 1002UL)));
  v = (unsigned int)v_4;
  result = (signed char)v;
  result = result;
  return result;
}


