#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 808771103
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, float p_5, long p_7)
{
  float v;
  float result;
  result = -9937175552.f;
  v = 4294951680.f * ((float)((long)(p_5 / (result + 583.f)) + p_7) + 
                      111148848.f / (p_5 * (float)p_7 + 888.f));
  result = (float)(- (((int)(! p) - (int)((short)4929610752.f)) * ((int)((char)(
                                                                   result - v)) % 67)));
  return result;
}


