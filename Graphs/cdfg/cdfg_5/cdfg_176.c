#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 923898505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, double p_13, unsigned long p_15)
{
  unsigned short v_17;
  long v_11;
  unsigned long long v_9;
  unsigned short v_6;
  int v_4;
  long v;
  signed char result;
  v_17 = (unsigned short)48657;
  v_11 = 27057L;
  v_6 = (unsigned short)61403;
  v_4 = (int)p_15;
  v = 61732L;
  result = (signed char)-90;
  v_9 = (unsigned long long)(- (p_15 % (unsigned long)((int)v_17 + 448)) * (unsigned long)(- (
                             (int)v_6 & (int)((unsigned short)-3.09138594733e+38))));
  while ((unsigned long)(v + (long)(! (~ v_4))) <= (unsigned long)(4294920858U * (unsigned int)(
                                                                   ((int)v_6 % (
                                                                    v_4 + 375)) * p))) {
    v_4 = v_9 + 3275938756ULL;
    v_9 = (unsigned long long)((unsigned long)v_11 / (p_15 + 680UL) + (unsigned long)(
                               v_4 + (int)v_6));
    v = (long)(((unsigned long long)v_11 * v_9 << 38) - (unsigned long long)(! (
               (int)((unsigned char)p_13) + 136)));
    v_6 = (unsigned short)((((double)v_11 / (p_13 + 126.)) * 20674.) * (double)p);
  }
  while_0_break: ;
  return result;
}


