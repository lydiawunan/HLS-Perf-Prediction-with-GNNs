#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 539268662
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(void)
{
  double v_10;
  unsigned long long v_8;
  short v_6;
  char v_4;
  unsigned long long v;
  float result;
  v_10 = -977.69562014;
  v_6 = (short)-32326;
  v_4 = (char)20;
  v_8 = (unsigned long long)(- -43681);
  v = ((unsigned long long)v_6 * (v_8 + 248336403ULL)) / (unsigned long long)(
      ((int)(! (! v_4)) - (int)((char)(- ((double)v_6 + v_10)))) + 142);
  result = (float)(! v * ((116ULL / (v + 148ULL)) * (unsigned long long)v_4));
  return result;
}


