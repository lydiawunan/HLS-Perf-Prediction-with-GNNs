#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 726442686
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p)
{
  unsigned int v_7;
  unsigned char v_4;
  float v;
  unsigned long long result;
  v_7 = (unsigned int)(! 869323518LL);
  v = (float)v_7;
  v_4 = (unsigned char)p;
  result = (unsigned long long)(((double)v / -2.92806245385e+38 + (double)(
                                 (int)v_4 / -80)) / ((double)(- ((long long)v_4 * -63646LL)) + 616.));
  return result;
}


