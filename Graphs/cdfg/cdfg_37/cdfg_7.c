#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427577191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p)
{
  unsigned int v_13;
  float v_11;
  float v_9;
  unsigned long long v_7;
  int v_4;
  char v;
  unsigned int result;
  v_13 = 3346899791U;
  v_11 = -2.98365278901e+38f;
  v_9 = (float)p;
  v_7 = (unsigned long long)p;
  v = (char)p;
  result = (unsigned int)p;
  v_4 = (int)p << 4;
  while ((float)((unsigned long long)((int)v * v_4 + 226 / ((int)p + 444)) / (
                 ~ (! v_7) + 681ULL)) == -6484.f / ((- v_9 + - v_11) + 573.f)) {
    v_9 = (float)((unsigned long long)((unsigned int)v_4 * v_13) * ((unsigned long long)result / (
                                                                    v_7 + 478ULL)) - (unsigned long long)(
                  ((int)p - 68) ^ (int)((unsigned short)v_9) % 9907));
    v_4 = ((int)p * -109 - (int)v) - (int)p;
    v_11 = (float)((int)v_11 / (((int)(- p) + 20119) + 640));
  }
  while_0_break: ;
  return result;
}


