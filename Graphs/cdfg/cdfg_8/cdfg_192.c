#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 723539931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, double p_7, unsigned long long p_11,
                 double p_13[2][1][2])
{
  signed char v_9;
  int v_4;
  char v;
  unsigned int result;
  v_9 = (signed char)-122;
  v_4 = (int)p_13[0][0][1];
  v = (char)p_11;
  result = 57590U;
  while ((unsigned int)(- (! (v_4 - (int)p))) != ~ (result >> ((int)p & 31)) << (
                                                 (unsigned int)p_7 & 31U)) {
    result = (int)v_9 % 793;
    v_9 = (signed char)(! (- p_11) - (unsigned long long)(~ (94313926 | (int)p_13[0][0][0])));
    v = (char)50;
    v_4 = (int)(- ((unsigned long long)((int)p % 166) - 748333883ULL));
  }
  while_0_break: ;
  result = 60740U * (unsigned int)(13081 * (149 / ((int)v + 840)));
  return result;
}


