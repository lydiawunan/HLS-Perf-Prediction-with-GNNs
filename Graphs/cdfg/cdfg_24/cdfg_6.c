#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 163967630
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, char p_7, unsigned char p_9)
{
  float v_17;
  unsigned short v_15;
  char v_13;
  signed char v_11;
  double v_4;
  long long v;
  unsigned int result;
  v_17 = 939.745422363f;
  v_15 = (unsigned short)35710;
  v_13 = (char)p_9;
  v_11 = (signed char)p;
  v_4 = -6354833539.36;
  v = (long long)p_9;
  while (18446744073111802840ULL % (unsigned long long)(((unsigned int)v_4 + p) + 104U) + (unsigned long long)(
         -34 + (226 | (int)p_7)) != (unsigned long long)p_9) {
    v_15 = (int)v_15 % ((int)v_13 * (int)((char)((double)v_11 + 2.15051973649e+38)) + 74);
    v = 55357LL;
    v_13 = (char)v;
    v_4 = (double)v_17;
  }
  while_0_break: ;
  result = (unsigned int)v;
  return result;
}


