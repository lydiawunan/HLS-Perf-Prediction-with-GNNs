#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 153718634
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, char p_7, double p_9[2])
{
  unsigned long long v_15;
  char v_13;
  double v_11;
  char v_4;
  unsigned int v;
  unsigned int result;
  v_15 = (unsigned long long)p_9[1];
  v_11 = 976.092273242;
  v_13 = (char)v_15;
  v = ((unsigned int)((int)p_7 % -1175 >> ((int)(- p_9[0]) & 31)) | (
       (unsigned int)(- v_11) - 1307U)) - (unsigned int)(! (~ v_13));
  v_4 = (char)p;
  result = v * (unsigned int)((double)((int)(! v_4) * (int)v_4) - p * (double)(! v));
  return result;
}


