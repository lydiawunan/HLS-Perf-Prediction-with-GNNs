#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711018133
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[5][2], double p_5, long long p_15)
{
  char v_17;
  long long v_13;
  signed char v_11;
  unsigned long v_9;
  signed char v_7;
  char v;
  int result;
  v_17 = (char)120;
  v_9 = 3698937487UL;
  v_7 = (signed char)-90;
  v = (char)p_15;
  result = (int)(- (- p_15) * (long long)(199135377U * ((unsigned int)v_17 % 10732U)));
  while (((unsigned long long)(-2.86432569423e+38f / ((float)v + 314.f)) | (
          ! p[3][0] + (unsigned long long)(p_5 / ((double)result + 566.)))) <= (unsigned long long)(! v_7)) {
    v_13 = v_9 % 4294967258UL;
    v_11 = (signed char)-33;
    v = (char)((double)v_11 * - (p_5 / ((double)v_13 + 635.)));
    result = (int)p_5;
  }
  while_0_break: ;
  return result;
}


