#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192175677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, int p_9, unsigned long p_15)
{
  short v_13;
  double v_11;
  double v_7;
  int v_5;
  char v;
  double result;
  v_13 = (short)p;
  v_11 = (double)p_15;
  v_7 = (double)p_15;
  v_5 = 29453;
  v = p;
  result = v_11;
  while ((unsigned long)((double)((int)v << ((int)p & 7)) * (result / -548.477307852)) / (
         - ((unsigned long)v_5 - 3331178952UL) + 842UL) <= (unsigned long)(- (
         (-38 - (int)((char)v_7)) * p_9))) {
    v_5 = (int)v_13 / (((int)v_11 + -45471828) + 59);
    v_7 = (- v_7 - 3718337791.) * ((double)p_15 / (- result + 299.));
    result = (double)p_9;
    v = (char)-119;
  }
  while_0_break: ;
  return result;
}


