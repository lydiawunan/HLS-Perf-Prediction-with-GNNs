#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251641874
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned long long p_5, unsigned int p_7,
           short p_9, char p_13)
{
  unsigned short v_15;
  char v_11;
  long long v;
  double result;
  v_15 = (unsigned short)p_5;
  v = -64447LL;
  result = -674.803810397;
  v_11 = (char)(- (! (unsigned char)98));
  while ((unsigned long long)(~ ((long long)p / (- v + 269LL))) != - (! p_5) * (unsigned long long)(
                                                                   ((long long)p_7 - -482536316LL) * (long long)(
                                                                   -3.35922277611e+38f / (
                                                                   (float)p_9 + 253.f)))) {
    result = (int)v_11 | 20;
    v_11 = (char)p_5;
    v = (long long)((unsigned long long)(- ((unsigned long)p_7 % 3828239191UL)) + 
                    (unsigned long long)((int)p_13 / ((int)v_15 + 22)) / (
                    ((unsigned long long)p_13 + 496086813ULL) + 394ULL));
    v = ! (v - (long long)(201 | (int)p_13));
  }
  while_0_break: ;
  return result;
}


