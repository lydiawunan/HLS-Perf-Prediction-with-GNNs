#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669561023
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned int p_11)
{
  double v_8;
  unsigned long v_6;
  signed char v_4;
  unsigned short v;
  char result;
  v_8 = -3453146659.66;
  v_4 = (signed char)72;
  v_6 = (unsigned long)(! (~ ((unsigned long long)v_8 % (p + 705ULL)) - (unsigned long long)(- (~ p_11))));
  v = (unsigned short)(~ ((unsigned long)(! ((int)v_4 % -14)) / (v_6 + 132UL)));
  result = (char)v;
  return result;
}


