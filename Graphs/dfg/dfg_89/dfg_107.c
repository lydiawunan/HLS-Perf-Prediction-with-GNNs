#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 733363514
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, int p_9, long long p_11)
{
  float v_15;
  signed char v_13;
  double v_7;
  double v_5;
  short v;
  short result;
  v_15 = -1.85753426276e+38f;
  v_5 = (double)p;
  result = (short)p;
  v_13 = (signed char)-26;
  v_7 = (double)0;
  v = (short)((((v_5 + v_7) + 487.177154541) - (double)result * (v_5 + (double)p_9)) + 73.);
  result = (short)((unsigned long)(26768U % (32U % ((p + (unsigned int)v) + 738U) + 14U)));
  return result;
}


