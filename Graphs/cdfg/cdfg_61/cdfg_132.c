#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628997745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, long p_4[5][5], signed char p_7, unsigned int p_15)
{
  unsigned long long v_13;
  signed char v_11;
  signed char v_9;
  unsigned long v;
  char result;
  v_13 = (unsigned long long)p_15;
  v_11 = (signed char)-10;
  v_9 = p_7;
  v = (unsigned long)p;
  while (((int)((signed char)(- p)) ^ (int)(- p_7)) / ((int)(! v_9) + 414) <= - (
         (int)v_11 - -3585)) {
    v_11 = v_13 * 4294920280ULL;
    v_13 = (unsigned long long)(! (char)98);
    v = (unsigned long)(! ((unsigned long long)((long)v_9 & p_4[2][4]) + (
                           v_13 + (unsigned long long)p_15)));
    v_9 = (signed char)(((unsigned long)(p_4[3][1] * 104L) + (v - v)) - (unsigned long)(
                        (double)v_13 + (1.84467440737e+19 - p)));
  }
  while_0_break: ;
  if (~ (~ (! p_4[1][1])) == ~ (((long)1.96391581114e+38 + p_4[0][2]) / (
                                (long)(-6647969359.96 / ((double)v + 719.)) + 37L))) 
    result = (char)-34;
  else result = (char)(- p * 931306353.985);
  return result;
}


