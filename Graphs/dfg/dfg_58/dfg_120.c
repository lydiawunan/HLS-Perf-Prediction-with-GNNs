#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985719150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p)
{
  double v_13;
  char v_11;
  char v_9;
  int v_7;
  double v_5;
  double v;
  float result;
  v_13 = (double)p;
  v_11 = (char)11;
  v_9 = (char)-96;
  v_5 = -6.52429850576e+36;
  v = 322764778.839;
  v_7 = (int)(((double)((int)(! v_9) % (((int)v_11 >> ((int)p & 7)) + 23)) / (
               v_13 + 474.)) * (double)(((int)(! p) + (int)(- p)) ^ (int)(
                                        (34715. + v_13) - - v)));
  v = (double)(0 - - (! v_7));
  v_5 = (double)(short)-26857;
  result = (float)((unsigned long long)(- (- (v - (double)p))) ^ (unsigned long long)p % (
                                                                 ~ ((unsigned long long)v_5 * 5914ULL) + 737ULL));
  return result;
}


