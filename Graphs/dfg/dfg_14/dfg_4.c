#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893403398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[1], double p_4, float p_9)
{
  short v_11;
  signed char v_7;
  unsigned long long v;
  int result;
  v_7 = (signed char)p_4;
  v = 18446744073670247857ULL;
  result = (int)p_9;
  v_11 = (short)v_7;
  v_7 = (signed char)(v / ((unsigned long long)((double)(- p_9) * (64. / (
                                                                   (p_4 - (double)v_11) + 259.))) + 744ULL));
  result = (int)(((unsigned long long)(-105 / (result + 566)) * 902317291ULL | (unsigned long long)(
                  result * ((int)((signed char)-6569291359.97) >> ((int)v_7 & 7)))) + 18446744073709551603ULL);
  result = (int)(((unsigned long long)p[0] % ((((unsigned long long)p_4 ^ 51038ULL) - v) + 242ULL)) / (unsigned long long)(
                 ~ result + 169));
  return result;
}


