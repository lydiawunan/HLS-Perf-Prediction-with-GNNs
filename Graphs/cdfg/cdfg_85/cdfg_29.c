#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372356871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p[4], float p_7, signed char p_9, float p_11,
                 unsigned long long p_15)
{
  unsigned long v_17;
  unsigned long long v_13;
  short v_5;
  char v;
  unsigned int result;
  v_17 = (unsigned long)p[3];
  v_13 = 18446744072965872981ULL;
  v_5 = (short)-21886;
  v = (char)p_15;
  while (25776 == (int)v_5) {
    v = v_17 - 3931141912UL;
    v_17 = (unsigned long)(- p[1]);
    v_13 = (unsigned long long)p_7;
    v_5 = (short)p_7;
  }
  while_0_break: ;
  if ((unsigned long long)(2.4718505346e+38 / (double)(((p_7 + -461.282043457f) + 40.f) + 883.f)) > 
      (unsigned long long)(! ((int)((signed char)p_7) / ((int)p_9 + 715))) / (
      ((unsigned long long)p_11 & v_13) % (! p_15 + 241ULL) + 737ULL)) 
    result = (unsigned int)p[1];
  else {
    v_5 = (short)(33781ULL + (unsigned long long)(! v));
    v = (char)((unsigned long)(~ (-5605 / ((int)v_5 + 989))) ^ 42563UL);
    result = (unsigned int)v;
  }
  return result;
}


