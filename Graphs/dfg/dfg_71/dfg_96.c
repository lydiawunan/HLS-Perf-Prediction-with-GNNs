#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 511426181
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, char p_4[5])
{
  double v_7;
  char v;
  signed char result;
  result = (signed char)111;
  v_7 = (double)(unsigned short)19663;
  v = (char)12;
  result = (signed char)((((double)(- result) + (double)p / -8377294715.78) * (double)(
                          (int)(- p_4[3]) * (int)(- v))) / (v_7 + 812.));
  return result;
}


