#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 816841918
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, char p_5, double p_13)
{
  float v_11;
  signed char v_9;
  signed char v_7;
  double v;
  int result;
  v_9 = (signed char)p_5;
  v_7 = (signed char)-11;
  v = 4472853781.5;
  v_11 = (float)(char)-54;
  if (v == (double)((int)p_5 + (int)v_7 % ((int)v_9 + 646)) / ((double)v_11 * (
                                                               10005. + p_13) + 70.)) 
    result = ~ ((int)((char)6760175104.f) & (int)p);
  else result = (int)(-0ULL);
  return result;
}


