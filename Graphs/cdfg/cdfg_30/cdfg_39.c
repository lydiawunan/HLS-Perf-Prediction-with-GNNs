#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600868169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, short p_13)
{
  unsigned char v_11;
  unsigned long long v_9;
  double v_7;
  unsigned short v_5;
  unsigned short v;
  double result;
  v_11 = (unsigned char)140;
  v_9 = (unsigned long long)p;
  v_7 = -2.89823996649e+38;
  v_5 = (unsigned short)p_13;
  result = 826.932762236;
  v = (unsigned short)((unsigned int)((int)v_11 + (int)p_13) % (p + 88U));
  while ((unsigned int)v == - (! p & (unsigned int)((int)v_5 * 683329569))) {
    result = v_9 - (unsigned long long)((int)((unsigned short)v_7) ^ 31726);
    v_9 = (unsigned long long)((unsigned long)(32525 % ((int)v_11 % (
                                                        (int)p_13 + 912) + 913)) / (
                               ! ((unsigned long)p + 23004UL) + 730UL));
    v_7 = (double)v_9;
    v = (unsigned short)65273;
  }
  while_0_break: ;
  return result;
}


