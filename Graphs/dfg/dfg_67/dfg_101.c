#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1014244112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, short p_7, unsigned char p_11)
{
  unsigned int v_9;
  char v_5;
  int v;
  double result;
  v_9 = (unsigned int)p;
  v = -1038204559;
  v_5 = (char)(! (unsigned char)8);
  result = (double)p_7;
  result = (double)(! ((unsigned int)(6 / ((int)v_5 + 431) - (int)(- result)) + 
                       4294967195U % (v_9 / (unsigned int)((int)p_11 + 843) + 87U)));
  result = (double)((! v % -2838 + - (p + (int)v_5)) / (((int)((unsigned char)(
                                                         ((double)p_7 - result) - -4.65883648658e+28)) - 174) + 842));
  return result;
}


