#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 708551684
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, double p_11)
{
  unsigned int v_8;
  float v_6;
  unsigned long long v_4;
  short v;
  float result;
  v_8 = (unsigned int)p_11;
  v_4 = (unsigned long long)p;
  v_6 = (float)p_11;
  if ((unsigned long)(- v_6) > (unsigned long)(~ v_8) % (unsigned long)(
                               (7705260L + (long)((int)p + (int)p)) + 309L)) {
    v = (short)v_4;
    result = (float)(- ((int)(~ v) - 60538));
    result = - (- (- result));
  }
  else result = (float)(char)-43;
  return result;
}


