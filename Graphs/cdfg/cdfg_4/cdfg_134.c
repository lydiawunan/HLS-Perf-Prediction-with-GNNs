#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809895921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned int p_15, double p_19)
{
  double v_21;
  signed char v_17;
  unsigned char v_12;
  unsigned char v_10;
  long long v_8;
  double v_6;
  unsigned long long v_4;
  unsigned int v;
  unsigned short result;
  v_21 = 4833377051.74;
  v_17 = (signed char)111;
  v_8 = -218059171LL;
  v_6 = -5160193424.6;
  v_4 = (unsigned long long)p_19;
  v = (unsigned int)p_19;
  result = (unsigned short)p_19;
  if ((double)((int)((signed char)p_19) - 67) / (p_19 + 90.) >= 0.) {
    v = (unsigned int)((unsigned long long)v_17 - (- p - (unsigned long long)v_8));
    v_8 = (long long)(~ (! (p_15 / ((unsigned int)7638489443.11 + 811U))));
    v_4 = ! ((p * (unsigned long long)result) / ((unsigned long long)-9230714880.f + 73ULL));
  }
  else {
    v_6 = (double)(unsigned char)25;
    v_8 = (long long)p;
    v = (unsigned int)((unsigned long long)(176 % ((int)((unsigned char)p_19) + 757)) / (
                       ((unsigned long long)v_21 << (p & 63ULL)) + 911ULL) ^ - v_4);
  }
  while (18446744073709533050ULL > (unsigned long long)(! v)) {
    v_4 = v_8 + (long long)(v_6 + (double)(v_4 * 927170559ULL));
    v_12 = (unsigned char)151;
    v_10 = (unsigned char)(~ (! 4294913846UL));
    v = (unsigned int)(- ((int)(! v_10) % ((int)v_12 + 206)));
  }
  while_0_break: ;
  return result;
}


